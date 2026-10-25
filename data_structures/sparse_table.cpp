struct MinSparseTable {
    int n;
    int k;
    vector<vector<int>> table;
    vector<int> intLog2;
    MinSparseTable(const vector<int>& a = {}) {
        n = a.size();
        k = 0;
        while ((1 << k) <= n) k++;
        table.resize(k, vector<int>(n));
        for (int i = 0; i < n; i++) {
            table[0][i] = a[i];
        }
        for (int j = 1; j < k; j++) {
            int len = (1 << (j - 1));
            for (int i = 0; i + (len * 2) <= n; i++) {
                table[j][i] = min(table[j - 1][i], table[j - 1][i + len]);
            }
        }
        intLog2.resize(n + 1);
        for (int i = 2; i <= n; i++) {
            intLog2[i] = intLog2[i / 2] + 1;
        }
    }
    int getMin(int l, int r) {
        int d = intLog2[r - l];
        return min(table[d][l], table[d][r - (1 << d)]);
    }
}
