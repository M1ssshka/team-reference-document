int n;
cin >> n;
vector<int> a(n);
for (int i = 0; i < n; i++) {
    cin >> a[i];
    a[i]--;
}
vector<char> used(n);
int cnt = 0;
for (int i = 0; i < n; i++) {
    if (used[i]) continue;
    int len = 0;
    int v = i;
    while (!used[v]) {
        used[v] = true;
        len++;
        v = a[v];
    }
    cnt++;
    cout << len << ' ';
}
cout << '\n' << cnt << '\n';
