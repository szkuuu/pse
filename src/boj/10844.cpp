#include <bits/stdc++.h>

using namespace std;

int g_n;
unsigned long long g_cache[101][9];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> g_n;

    for (int i = 1; i <= g_n; ++i) {
        for (int j = 0; j < 9; ++j) {
            if (i == 1) {
                g_cache[1][j] = 1;
                continue;
            }

            if (i == 2) {
                g_cache[2][j] = j == 8 ? 1 : 2;
                continue;
            }

            if (j == 0) {
                g_cache[i][0] = (g_cache[i - 1][1] + g_cache[i - 2][0]) % 1000000000;
            } else if (j == 8) {
                g_cache[i][8] = g_cache[i - 1][7] % 1000000000;
            } else {
                g_cache[i][j] = (g_cache[i - 1][j - 1] + g_cache[i - 1][j + 1]) % 1000000000;
            }
        }
    }

    unsigned long long res = 0;
    for (int i = 0; i < 9; ++i) {
        res += g_cache[g_n][i];
        res %= 1000000000;
    }

    cout << res << '\n';

    return 0;
}

// cannot solve

