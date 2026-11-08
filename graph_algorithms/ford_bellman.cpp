int n, m;
cin >> n >> m;
vector<edge> e(m);
for (int i = 0; i < m; ++i) {
    int v, u, w;
    cin >> v >> u >> w;
    --v, --u;
    e[i] = {v, u, w};
}
vector<long long> d(n, INF64);
int s;
cin >> s;
--s;
d[s] = 0;
for (int it = 0; it < n - 1; ++it) {
    for (auto [v, u, w] : e)
        if (d[v] != INF64) d[u] = min(d[u], d[v] + w);
}
