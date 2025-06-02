# Assignment
Q1.
Key Idea:
We use recursive backtracking to build the solution one row at a time.
Steps:
1. Try placing a queen in each column of the current row.
2. For each valid position:
->Place the queen.
->Recurse to the next row.
->Backtrack after exploring.
3. If a full valid configuration is reached, store or print it.
4. For checking valid position track column, left-diagonal, and right-diagonal if there already a queen.

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
