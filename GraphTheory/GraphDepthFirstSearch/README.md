# Depth Search Tree (DFS)

DFS is a recursive algorithm for traversing a graph. It starts from a given node. In fact, we can implement an iterative version using a stack.

### Version 1

DFS(node) <br/>
_ Pick one of its edges.<br/> - Mark the neighbour as visited.<br/> - Recurese DFS(neighbour)<br/> + Do the recursion logic.<br/>
_ Pick another edge: if available, and if its end hasn't been visited.<br/>
