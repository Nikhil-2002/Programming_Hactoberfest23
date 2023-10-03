#include <bits\stdc++.h>
using namespace std;

/*
  Disjoint Set Union is a data structure that is used to find dynamic set
  of connected elements(pairwise or through a chained pairwise relation).

  The algorithm is used to find the connected components in a graph network,
  flow network, etc.

  The data structure maintains two arrays :-
    1. parent
    2. rank (Here we are doing union by rank)

  There are 3 main fucntionalities in this data structure:-

    1. MAKE_SET() ---> initialises the data-structures, parent[node]=node
      initially and rank of all nodes = 0.


    2. FIND_SET(node)  ---> Finds the representative element of the set where
      node belongs

    3. UNION(x,y)   ----> Joins the nodes x and y based on the rank of the
      parent of x and y. Say, parent of x is p_x and parent of y is p_y.

      Then if,

        a. rank[p_x]>rank[p_y] ---> Make parent[p_y]=p_x ; No change in rank

        b. rank[p_y]>rank[p_x] ---> Make parent[p_x]=p_y; No change in rank

        c. rank[p_x]=rank[p_y] ---> Make parent[p_y]=p_x; Increment rank[p_x] by 1

  For n operations the amortised time complexity to do union operations is
  O(alpha); where alpha is the inverse ackermann function.

*/

class DSU
{
private:
  vector<int> parent; // stores the representative element of the set
  vector<int> rank;   // stores the rank of the nodes(parent of nodes to be specific)
  int connectedComponents;

public:
  DSU(int);                          // Similiar to MAKE_SET(); initialises the data structure
  int findParent(int);               // Similar to FIND_SET(node); Finds representative element of the set where node belongs
  void unionByRank(int, int);        // Similiar to UNION(x,y)
  int numberOfConnectedComponents(); // Utility function to track the number of connected components as the graph grows
};

/*
  @param - Total number of nodes in the graph
  @return - void
*/

DSU::DSU(int n)
{
  this->rank.resize(n, 0); // Consider 0 based indexing
  this->parent.resize(n);
  this->connectedComponents = n; // initally all are disconnected
  for (int i = 0; i < n; i++)
  {
    this->parent[i] = i;
  }
}

/*
  @param - node
  @return - parent/representative element of node
*/

int DSU::findParent(int node)
{
  if (node == this->parent[node])
  {
    return node;
  }
  return this->parent[node] = this->findParent(this->parent[node]);
}

/*
  @param - node x and nodex y whose union is to be done
  @return - void
*/

void DSU::unionByRank(int x, int y)
{
  int parent_x = this->findParent(x);
  int parent_y = this->findParent(y);
  if (parent_x == parent_y)
  {
    return;
  }
  if (this->rank[parent_x] > this->rank[parent_y])
  {
    this->parent[parent_y] = parent_x;
  }
  else if (this->rank[parent_x] < this->rank[parent_y])
  {
    this->parent[parent_x] = parent_y;
  }
  else
  {
    this->parent[parent_y] = parent_x;
    this->rank[parent_x]++;
  }
  this->connectedComponents--;
}

/*
  @param - nil
  @return - Returns the number of connected components in the graph
*/
int DSU::numberOfConnectedComponents()
{
  return this->connectedComponents;
}

/* Main Function to test the DSU datastructure */

int main()
{
  DSU obj(6); // Nodes are 0,1,2,3,4,5
  cout << "The number of connected components are: " << obj.numberOfConnectedComponents() << "\n";
  cout << "Joining nodes 1 and 2\n";
  obj.unionByRank(1, 2);
  cout << "The number of connected components are: " << obj.numberOfConnectedComponents() << "\n";
  cout << "Joining nodes 1 and 0\n";
  obj.unionByRank(1, 0);
  cout << "The number of connected components are: " << obj.numberOfConnectedComponents() << "\n";
  cout << "Joining nodes 1 and 5\n";
  obj.unionByRank(1, 5);
  cout << "Parent of node 0 is : " << obj.findParent(0) << "\n";
  cout << "The number of connected components are: " << obj.numberOfConnectedComponents() << "\n";
  cout << "Joining nodes 3 and 2\n";
  obj.unionByRank(3, 2);
  cout << "The number of connected components are: " << obj.numberOfConnectedComponents() << "\n";
  cout << "Joining nodes 4 and 2\n";
  obj.unionByRank(4, 2);
  cout << "The number of connected components are: " << obj.numberOfConnectedComponents() << "\n";
  return 0;
}