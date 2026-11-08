queue<int> q;
vector<int> d(n);
q.push(0);
used[0] = true;
while (!q.empty()) {
    int v = q.front();
    q.pop();
    for (int u : g[v]) {
        if (used[u]) continue;
        used[u] = true;
        d[u] = d[v] + 1;
        q.push(u);
    }
}
