void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<edge>> g(n);
    for (int i = 0; i < m; ++i) {
        int v, u, w;
        cin >> v >> u >> w;
        --v, --u;
        g[v].push_back({u, w});
        g[u].push_back({v, w});
    }
    priority_queue<pair<li, int>, vector<pair<li, int>>, greater<pair<li, int>>> q;
    int s;
    cin >> s;
    s--;
    vector<li> d(n, INF64);
    d[s] = 0;
    q.push({d[s], s});
    while (!q.empty()) {
        int v = q.top().second;
        bool need = d[v] == q.top().first;
        q.pop();
        if (!need) continue;
        for (auto [u, w] : g[v]) {
            if (d[u] > d[v] + w) {
                d[u] = d[v] + w;
                q.push({d[u], u});
            }
        }
    }
}
