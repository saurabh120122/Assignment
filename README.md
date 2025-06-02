# Assignment
Q2.
Key Idea:
In a Directed Acyclic Graph (DAG), all nodes can be sorted topologically. If some nodes remain unprocessed (due to cycles), it indicates a circular dependency.
Steps:
1. Build an adjacency list and compute the indegree for each node.
2. Add all nodes with indegree == 0 to a queue.
3. Repeatedly:
  ->Remove a node from the queue
   ->Decrease the indegree of its neighbors
   ->If a neighbor’s indegree becomes 0, push it to queue.
4. Count all the nodes that are pushed inside queue.
5. If not all nodes are processed, a cycle exists.
