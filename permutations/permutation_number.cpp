li cnt = 0;
for (int i = 0; i < n; i++) {
    int diff = 0;
    for (int j = 0; j < i; j++) {
        if (a[j] < a[i]) diff++;
    }
    cnt += (a[i] - diff - 1) * 1ll * fact[n - i - 1];
}
cout << cnt + 1 << '\n';
