vector<vector<int>> g, tg;
vector<char> used;
vector<int> ord;
void ts(int v) {
    used[v] = true;
    for (int u : g[v])
        if (!used[u]) ts(u);
    ord.push_back(v);
}
vector<int> clr;
int comp;
void dfs(int v) {
    clr[v] = comp;
    for (int u : tg[v])
        if (clr[u] == -1) dfs(u);
}
int main() {
    int n, m;
    cin >> n >> m;
    g.assign(n, {});
    tg.assign(n, {});
    for (int i = 0; i < m; ++i) {
        int v, u;
        cin >> v >> u;
        --v, --u;
        g[v].push_back(u);
        tg[u].push_back(v);
    }
    used.assign(n, false);
    for (int i = 0; i < n; ++i) {
        if (!used[i]) {
            ts(i);
        }
    }
    reverse(ord.begin(), ord.end());
    comp = 0;
    clr.assign(n, -1);
    for (int v : ord)
        if (clr[v] == -1) {
            dfs(v);
            ++comp;
        }
}
