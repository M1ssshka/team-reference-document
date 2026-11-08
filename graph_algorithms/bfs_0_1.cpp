vector<int> bfs(int s) {
    int n = g.size();
    vector<int> d(n, 1e9);
    deque<int> q;
    q.push_front(s);
    d[s] = 0;
    while (!q.empty()) {
        int v = q.front();
        q.pop_front();
        for (auto [u, w] : g[v]) {
            if (d[u] <= d[v] + w) continue;
            d[u] = d[v] + w;
            if (w == 0) {
                q.push_front(u);
            } else {
                q.push_back(u);
            }
        }
    }
    return d;
}
