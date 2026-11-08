vector<int> z_func(const string& s) {
    vector<int> z(int(s.size()));
    int l = 0, r = 0;
    for (int i = 1; i < int(s.size()); i++) {
        if (i < r) z[i] = min(z[i - l], r - i);
        while (i + z[i] < int(s.size()) && s[i + z[i]] == s[z[i]]) {
            z[i]++;
        }
        if (z[i] + i > r) r = i + z[i], l = i;
    }
    return z;
}
