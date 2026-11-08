const int B = 512;
struct SqrtDecompMin {
    vector<long long> a;
    vector<long long> f;
    int blocks;
    int n;
    void recalc_block(int x) {
        int l = x * B;
        int r = min(x * B + B, n);
        f[x] = *min_element(a.begin() + l, a.end() + r);
    }
    void upd(int x, long long y) {
        int b = x / B;
        if (a[x] == f[b] && y > a[x]) {
            a[x] = y;
            recalc_block(b);
        } else {
            a[x] = y;
            f[b] = min(f[b], y);
        }
    }
    long long get(int l, int r) {
        // получить минимум на [l, r)
        long long ans = 1e18;
        int cur = l;
        while (cur < r) {
            if (cur % B == 0 && cur + B - 1 < r) {
                ans = min(ans, f[cur / B]);
                cur += B;
            } else {
                ans = min(ans, a[cur]);
                cur++;
            }
        }
        return ans;
    }
    SqrtDecomp(const vector<long long>& a = {}) {
        blocks = (n + B - 1) / B;
        this->a = a;
        f.resize(blocks);
        for (int i = 0; i < n; i++) recalc_block(i);
    }
};
