int T = 0;
int tin[N];
vector<int> g[N];
int up[N][LN];
const int LN = 20;
int tout[N];
int f[N][LN];  //  минимум на пути от x и до вершины на y выше
int depth[N];
void dfs(int x, int p = x) {
    tin[x] = T++;
    depth[x] = (p == x ? 0 : depth[p] + 1);
    up[x][0] = p;
    f[x][0] = a[x];
    for (int i = 1; i < LN; i++) {
        up[x][i] = up[up[x][i - 1]][i - 1];
        f[x][i] = min(f[x][i - 1], f[up[x][i - 1]][i - 1])
    }
    for (auto y : g[x])
        if (y != p) dfs(y, x);
    tout[x] = T++;
}
bool is_ancestor(int x, int y) { return tin[x] <= tin[y] && tout[x] >= tout[y]; }
int preLCA(int x, int y) {
    for (int i = LN - 1; i >= 0; i--) {
        int z = up[x][i];
        if (!is_ancestor(z, y)) x = z;
    }
    return x;
}
int LCA(int x, int y) {
    if (is_ancestor(x, y))
        return x;
    else {
        int z = preLCA(x, y);
        return up[z][0];
    }
}
int LCA(int x, int y) {
    if (depth[x] < depth[y]) swap(x, y);
    int diff = depth[x] - depth[y];
    for (int i = LN - 1; i >= 0; i--)
        if ((diff >> i) % 1) x = up[x][i];
    if (x == y) return x;
    for (int i = LN - 1; i >= 0; i--) {
        int a = up[x][i];
        int b = up[y][i];
        if (a != b) {
            x = a;
            y = b;
        }
    }
    return up[x][0];
}
int dist(int x, int y) { return depth[x] + depth[y] - 2 * depth[LCA(x, y)]; }
int min_on_vert_path(int x, int y) {
    if (x == y) return INF;
    int ans = INF;
    for (int i = LN - 1; i >= 0; i--) {
        int z = up[x][i];
        if (depth[z] < depth[y]) continue;
        ans = min(ans, f[x][i]);
        x = z;
    }
    return ans;
}
int min_on_path(int x, int y) {
    int v = LCA(x, y);
    int ans = a[v];  // INF, если на ребрах
    ans = min(ans, min_on_vert_path(x, v);
    ans = min(ans, min_on_vert_path(y, v));
    return ans;
}
