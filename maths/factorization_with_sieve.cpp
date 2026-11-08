void get_divs(int i, int d, const vector<pair<int, int>>& f) {
    if (i == int(f.size())) {
        cout << d << '\n';
        return;
    }
    auto [p, pw] = f[i];
    for (int q = 0; q <= pw; q++) {
        get_divs(i + 1, d, f);
        d *= p;
    }
}
void solve() {
    int n;
    cin >> n;
    vector<char> prime(n + 1, true);
    vector<int> prdiv(n + 1);
    iota(prdiv.begin(), prdiv.end(), 0);
    prime[0] = prime[1] = false;
    for (int i = 2; i <= n; i++) {
        if (!prime[i]) continue;
        for (li j = i * 1ll * i; j <= n; j += i) {
            prime[j] = false;
            prdiv[j] = min(prdiv[j], i);
        }
    }
    auto fact = [&](int x) {
        vector<pair<int, int>> f;
        while (x > 1) {
            int p = prdiv[x];
            int cnt = 0;
            while (x % p == 0) {
                x /= p;
                cnt++;
            }
            f.push_back({p, cnt});
        }
        return f;
    };
    int x;
    cin >> x;
    get_divs(0, 1, fact(x));
}
