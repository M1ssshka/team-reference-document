vector<vector<int>> g;
vector<char> used;
vector<int> d;
vector<int> up;
void dfs(int v, int p = -1) {
    used[v] = true;
    up[v] = d[v];
    bool is_cutpoint = false;
    int cnt = 0;
    for (int u : g[v])
        if (p != u) {
            if (!used[u]) {
                d[u] = d[v] + 1;
                dfs(u, v);
                if (up[u] >= d[v] && p != -1) is_cutpoint = true;
                up[v] = min(up[v], up[u]);
                cnt++;
            } else {
                up[v] = min(up[v], d[u]);
            }
        }
    if (p == -1 && cnt > 1) is_cutpoint = true;
    if (is_cutpoint) cout << v + 1 << '\n';
}
