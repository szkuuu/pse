#include <bits/stdc++.h>

using namespace std;

long g_cache[101] = {0, 1, 1, 1, 2, 2};

long recur(int n) {
    if (n < 5) return g_cache[n];

    if (g_cache[n - 1] == 0) {
        g_cache[n - 1] = recur(n - 1);
    }

    return g_cache[n - 1] + g_cache[n - 5];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;

        cout << recur(n) << '\n';
    }

    return 0;
}

// 13 min. 48

