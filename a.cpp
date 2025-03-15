#include <bits/stdc++.h>

using namespace std;

#define int long long

void solve() {
    int n, m; cin >> n >> m;

    map<int, int> cnt0, cnt1;
    for (int i = 1; i <= n; i ++) {
        for (int j = 1; j <= m; j ++) {
            int num; cin >> num;
            if ((i + j) % 2) {
                cnt1[num] ++;
            } else {
                cnt0[num] ++;
            }
        }
    }

    int ch = 1;
    for (auto i : cnt0) {
        if (cnt1.count(i.first)) {
            ch ++;
            break;
        }
    }

    cout << cnt1.size() + cnt0.size() - ch << "\n";
}

signed main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int _ = 1; cin >> _;
    while (_ --) solve();
}