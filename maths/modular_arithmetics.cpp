int add(int a, int b) {
    a += b;
    if (a >= MOD) a -= MOD;
    if (a < 0) a += MOD;
    return a;
}
int mul(int a, int b) { return a * 1ll * b % MOD; }
int binpow(int a, int b) {
    int res = 1;
    while (b > 0) {
        if (b & 1) res = res * 1ll * a % MOD;
        a = a * 1ll * a % MOD;
        b >>= 1;
    }
    return res;
}
int inv(int a) { return binpow(a, MOD - 2); }
