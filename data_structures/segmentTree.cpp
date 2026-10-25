struct LazyAddSegmentTree {
    vector<int> T;
    vector<int> lazy;
    int n;
    int getVal(int v) {
        if (lazy[v] == 0)
            return T[v];
        else
            return T[v] + lazy[v];
    }
    void recalc(int v) { T[v] = min(getVal(v * 2 + 1), getVal(v * 2 + 2)); }
    void build(int v, int l, int r, const vector<int>& a) {
        if (r - l == 1) {
            T[v] = a[l];
            return;
        }
        int m = (l + r) / 2;
        build(v * 2 + 1, l, m, a);
        build(v * 2 + 2, m, r, a);
        recalc(v);
    }
    void upd(int v, int l, int r, int L, int R, int val) {
        if (L >= R) return;
        if (l == L && r == R) {
            lazy[v] += val;
            return;
        }
        push(v);
        int m = (l + r) / 2;
        upd(v * 2 + 1, l, m, L, min(R, m), val);
        upd(v * 2 + 2, m, r, max(L, m), R, val);
        recalc(v);
    }
    void upd(int L, int R, int val) { upd(0, 0, n, L, R, val); }
    void push(int v) {
        if (lazy[v]) {
            T[v] += lazy[v];
            lazy[v * 2 + 1] += lazy[v];
            lazy[v * 2 + 2] += lazy[v];
            lazy[v] = 0;
        }
    }
    int getMin(int v, int l, int r, int L, int R) {
        if (L >= R) return INF;
        if (l == L && r == R) return getVal(T[v]);
        push(v);
        int m = (l + r) / 2;
        int x = getMin(v * 2 + 1, l, m, L, min(m, R));
        int y = getMin(v * 2 + 2, m, r, max(L, m), R);
        recalc(v);
        return min(x, y);
    }
    int getMin(int L, int R) { return getMin(0, 0, n, L, R); }
    void build(const vector<int>& a) {
        n = a.size();
        T = vector<int>(4 * n);
        lazy = vector<int>(4 * n, 0);
        build(0, 0, n, a);
    }
};
