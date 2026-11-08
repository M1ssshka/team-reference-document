vector<vector<int>> g;
vector<char> used;
void dfs(int v) {
    used[v] = true;
    for (int u : g[v])
        if (!used[u]) dfs(u);
}
