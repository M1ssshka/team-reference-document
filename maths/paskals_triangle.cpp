int n;
cin >> n;
vector<vector<int>> c(n + 1, vector<int>(n + 1));
for (int i = 0; i <= n; i++) {
    c[i][0] = c[i][i] = 1;
    for (int j = 1; j < i; j++) {
        c[i][j] = c[i - 1][j - 1] + c[i - 1][j];
    }
}
