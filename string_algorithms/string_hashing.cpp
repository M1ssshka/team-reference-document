const int M = 998244353;
const int M1 = 1e9 + 7;
pair<int, int> pw[N];
pair<int, int> operator +(const pair<int, int> &a, const pair<int, int> &b) {
    pair<int, int> res = {a.x + b.x, a.y + b.y};
    if (res.x >= M) res.x -= M;
    if (res.y >= M1) res.y -= M1;
    return res;
}
pair<int, int> operator +(const pair<int, int> &a, const int &b) {
    pair<int, int> res = {a.x + b, a.y + b};
    if (res.x >= M) res.x -= M;
    if (res.y >= M1) res.y -= M1;
    return res;
}
pair<int, int> operator -(const pair<int, int> &a, const pair<int, int> &b) {
    pair<int, int> res = {a.x - b.x, a.y - b.y};
    if (res.x < 0) res.x += M;
    if (res.y < 0) res.y += M1;
    return res;
}
pair<int, int> operator *(const pair<int, int> &a, const pair<int, int> &b) {
    pair<int, int> res = {(a.x * 1ll * b.x) % M, (a.y * 1ll * b.y) % M1};
    return res;
}
pair<int, int> operator *(const pair<int, int> &a, const int b) {
    pair<int, int> res = {(a.x * 1ll * b) % M, (a.y * 1ll * b) % M1};
    return res;
}
vector<pair<int, int>> get_hash(string s) {
    int n = s.size();
    vector<pair<int, int>> hs(n + 1);
    for (int i = 0; i < n; i++) {
        hs[i + 1] = hs[i] * B + (s[i] - 'a' + 1);
    }
    return hs;
}
void solve() {
    pw[0] = {1, 1};
    for (int i = 1; i < N; i++) pw[i] = pw[i - 1] * B;
    auto get_sub = [&](int l, int r) {
        return hs[r] - hs[l] * pw[r - l];
    };
}
