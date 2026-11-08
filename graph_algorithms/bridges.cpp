vector<vector<edge>> g;
vector<char> used;
vector<int> up, d;
vector<char> is_bridge;
void dfs(int v, int p = -1) {
    up[v] = d[v];
    used[v] = true;
    for (auto [u, i] : g[v])
        if (u != p) {
            if (!used[u]) {
                d[u] = d[v] + 1;
                dfs(u, v);
                if (up[u] > d[v]) is_bridge[i] = true;
                up[v] = min(up[v], up[u]);
            } else {
                up[v] = min(up[v], d[u]);
            }
        }
}
