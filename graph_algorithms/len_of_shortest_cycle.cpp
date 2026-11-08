int bfs(int s) {
    int res = INF;
    int n = g.size();
    vector<int> d(n, INF);
    queue<int> q;
    vector<int> p(n, -1);
    q.push(s);
    d[s] = 0;
    while (!q.empty()) {
        int v = q.front();
        q.pop();
        for (int u : g[v]) {
            if (u == p[v]) continue;
            if (d[u] == INF) {
                d[u] = d[v] + 1;
                p[u] = v;
                q.push(u);
            } else {
                res = min(res, d[u] + d[v] + 1);
            }
        }
    }
    return res;
}
