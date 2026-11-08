vector<int> p_func(const string& s) {
    vector<int> p(int(s.size()));
    for (int i = 1; i < int(s.size()); i++) {
        int j = p[i - 1];
        while (j > 0 && s[i] != s[j]) j = p[j - 1];
        if (s[i] == s[j]) j++;
        p[i] = j;
    }
    return p;
}
