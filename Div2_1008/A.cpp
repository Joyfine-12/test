#include <bits/stdc++.h>

#define int long long

void solve() {
    int n, x; std::cin >> n >> x;
    int sum = 0;
    for (int i = 1; i <= n; i ++) {
        int num; std::cin >> num;
        sum += num;
    }
    if(n * x == sum) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }
}

signed main() {
    std::ios::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
    int _ = 1; std::cin >> _;
    while(_ --) solve();
}