#include <bits/stdc++.h>

using namespace std;

int g_limit;
int g_cache[500][500];

void f(int m, int n, int v) {
    if (n - 1 < 0) {
        g_cache[m][n] = g_cache[m - 1][n] + v;
        return;
    }
    if (m == n) {
        g_cache[m][n] = g_cache[m - 1][m - 1] + v;
        return;
    }

    g_cache[m][n] = max(g_cache[m - 1][n], g_cache[m - 1][n - 1]) + v;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> g_limit;
    cin >> g_cache[0][0];

    for (int i = 1; i < g_limit; ++i) {
        for (int j = 0; j <= i; ++j) {
            int item;
            cin >> item;

            f(i, j, item);
        }
    }

    cout << *max_element(begin(g_cache[g_limit - 1]), end(g_cache[g_limit - 1])) << '\n';

    return 0;
}

// 56 min. 51

