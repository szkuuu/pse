#include <bits/stdc++.h>

using namespace std;

static int rec(int n) {
    if (n == 1) return 1;
    if (n == 0) return 0;

    return rec(n - 2) + rec(n - 1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    cout << rec(n) << '\n';

    return 0;
}

