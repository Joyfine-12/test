#include <bits/stdc++.h>

#define int long long

int x = 42;
const int* p = &x;
int const* q = &x;
int* const m = &x;

int a = 24;

signed main() {
    *m = a;
    p = &a;
    q = &a;
    // *q = a;
    return 0;
}