#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

/*
  A trie or prefix tree is a tree data structure used to efficiently store and retrieve keys in a dataset of strings.
  There are various applications of this data structure, such as autocomplete and spellchecker.
  Some nuanced dynamic programming problems also use the trie data-structure to reduce its time complexity

  A trie Data-Structure maintains a node which can have atmost n-children(here it is 26 - total numbers of lowercase letters)
  This forms a deeply nested tree which where each node can have atmost n children.

*/

class TrieNode
{
public:
  bool isComplete;
  TrieNode *children[26];
  TrieNode()
  {
    isComplete = false; // by default
    memset(children, '\0', sizeof(children));
  }
};

class Trie
{
public:
  TrieNode *root;
  Trie()
  {
    root = new TrieNode();
  }

  void insert(string word)
  {
    TrieNode *node = root;
    for (auto ch : word)
    {
      int index = ch - 'a';
      if (node->children[index] == NULL)
      {
        node->children[index] = new TrieNode();
      }
      node = node->children[index];
    }
    node->isComplete = true;
  }

  bool search(string word)
  {
    TrieNode *node = root;
    for (auto ch : word)
    {
      int index = ch - 'a';
      if (node->children[index] == NULL)
        return false;
      node = node->children[index];
    }
    return node->isComplete;
  }

  bool startsWith(string prefix)
  {
    TrieNode *node = root;
    for (auto ch : prefix)
    {
      int index = ch - 'a';
      if (node->children[index] == NULL)
        return false;
      node = node->children[index];
    }
    return true;
  }
};

/* Main function to test the working of trie */
int main()
{
  Trie *obj = new Trie();
  obj->insert("AppleBee");
  obj->insert("Fardeen");
  obj->insert("Friendship");
  cout << "The given words inserted are: AppleBee, Fardeen, Friendship\n";
  if (obj->search("Friend"))
  {
    cout << "Friend was inserted in trie\n";
  }
  else
  {
    cout << "Friend was not inserted in trie\n";
  }
  if (obj->startsWith("Friend"))
  {
    cout << "Friend is a valid prefix\n";
  }
  else
  {
    cout << "Friend is not a valid prefix\n";
  }
  if (obj->startsWith("Far"))
  {
    cout << "Far is a valid prefix\n";
  }
  else
  {
    cout << "Far is not a valid prefix\n";
  }
  if (obj->search("AppleBee"))
  {
    cout << "AppleBee was inserted in trie\n";
  }
  else
  {
    cout << "Applebee was not inserted in trie\n";
  }
  return 0;
}