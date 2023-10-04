class Solution(object):
    def cloneGraph(self, node):
        """
        :type node: Node
        :rtype: Node
        """
        if node is None:
            return None
        if not node.neighbors:
            return Node(node.val)
        stack = [node]
        d = {}
        while stack:
            temp = stack.pop()
            d[temp.val] = []
            for n in temp.neighbors:
                d[temp.val].append(n.val)
                if n.val not in d:
                    stack.append(n)
        visited = [Node(val=i) for i in range(len(d)+1)]
        for i in range(1, len(d) + 1):
            for e in d[i]:
                visited[i].neighbors.append(visited[e])
        return visited[1]