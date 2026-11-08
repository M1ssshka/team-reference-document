vector<int> manacher_odd(const string& s) {
    int n = s.size();
    vector<int> f(n, 1);
    int l = 0, r = 1, m = 0;
    for (int i = 0; i < n; i++) {
        int j = i - 1;
        int k = i + 1;
        int idx = m - (i - m);
        if (idx >= l) {
            int len = max(min((f[idx] + 1) / 2, r - i), 1);
            j = i - len;
            k = i + len;
        }
        while (j >= 0 && k < n && s[j] == s[k]) {
            j--;
            k++;
        }
        f[i] = k - j - 1;
        if (k > r) {
            l = j + 1;
            m = i;
            r = k;
        }
    }
    return f;
}
