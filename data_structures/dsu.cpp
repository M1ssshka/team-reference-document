struct DSU {
    vector<int> s;
    vector<int> p;
    int get(int x) {
        if (p[x] == x) return x;
        return p[x] = get(p[x]);
    }
    bool merge(int x, int y) {
        x = get(x);
        y = get(y);
        if (x == y) return false;
        if (s[x] > s[y]) swap(x, y);
        s[y] += s[x];
        p[x] = y;
        return true;
    }
    DSU(int n = 0) {
        p = vector<int>(n);
        iota(p.begin(), p.end(), 0);
        s = vector<int>(n, 1);
    }
}
