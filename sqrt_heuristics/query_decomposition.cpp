const int B = 512;
struct SqrtDecompSum {
    vector<long long> p;
    vector<int> a;
    vector<pair<int, int>> buf;
    // буфер - (в какой позиции и на сколько увеличили)
    int n;
    void build() {
        p.resize(n + 1);
        p[0] = 0;
        for (int i = 0; i < n; i++) p[i + 1] = a[i] + p[i];
    }
    long long getSum(int l, int r) {
        // сумма на полуинтервале [l, r)
        long long cur = p[r] - [l];
        for (auto [pos, inc] : buf)
            if (pos >= l && pos < r) cur += inc;
        return cur;
    }
    void upd(int pos, int val) {
        int d = val - a[pos] a[pos] += d;
        buf.push_back(make_pair(pos, d));
        if (buf.size() >= B) {
            buf.clear();
            build();
        }
    }
    SqrtDecompSum(const vector<int>& v) {
        a = v;
        n = v.size();
        build();
    }
};
