#include <iostream>
#include <fstream>
#include <cstdio>
#include <string>
#include <cstring>
#include <algorithm>
#include <numeric>
#include <functional>
#include <iomanip>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <bitset>
#include <array>
#include <random>
#include <ctime>
#include <climits>
#include <cassert>

#define pb push_back
#define mp make_pair
#define x first
#define y second
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define see(x) cerr << (#x) << " = " << (x) << '\n'
#define sqr(a) ((a) * (a))
#define sz(a) int(a.size())

using namespace std;

template <typename T>
istream& operator>>(istream& in, vector<T>& v) {
    for (auto& x : v)
        in >> x;
    return in;
}

template <typename T>
ostream& operator<<(ostream& out, const vector<T>& v) {
    for (auto& x : v)
        out << x << ' ';
    return out;
}

typedef long long li;
typedef long double ld;
typedef pair<int, int> ptt;

void solve() {}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cout << setprecision(15) << fixed;
    int t = 1;
    cin >> t;
    while (t--) solve();
}
