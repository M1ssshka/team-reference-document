vector<vector<int>> g;
vector<int> d, p;
void dfs(int v) {
    for (int u : g[v]) {
        if (p[v] == u) continue;
        p[u] = v;
        d[u] = d[v] + 1;
        dfs(u);
    }
}
int main() {
    dfs(0);
    int s = max_element(d.begin(), d.end()) - d.begin();
    d.assign(n, 0);
    p.assign(n, -1);
    dfs(s);
    int t = max_element(d.begin(), d.end()) - d.begin();
    vector<int> path;
    while (t != -1) {
        path.push_back(t);
        t = p[t];
    }
    int d = path.size();
    if (d % 2 == 0) {
        cout << 2 << '\n';
        int fst = path[d / 2 - 1] + 1;
        int snd = path[d / 2] + 1;
        if (snd < fst) swap(fst, snd);
        cout << fst << ' ' << snd << '\n';
    } else {
        cout << 1 << '\n';
        cout << path[d / 2] + 1 << '\n';
    }
}
