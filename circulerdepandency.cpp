bool hasCircularDependency(int n, vector<vector<int>>& edges) {
    vector<vector<int>> adj(n);
    vector<int> indegree(n, 0);
    for (auto& edge : edges) {
        adj[edge[0]].push_back(edge[1]);
        indegree[edge[1]]++;
    }
    queue<int> q;
    for (int i = 0; i < n; ++i) {
        if (indegree[i] == 0) q.push(i);
    }
    int count = 0;
    while (!q.empty()) {
        int node = q.front(); q.pop();
        count++;
        for (int neighbor : adj[node]) {
            indegree[neighbor]--;
            if (indegree[neighbor] == 0) q.push(neighbor);
        }
    }
    return count != n;
}
