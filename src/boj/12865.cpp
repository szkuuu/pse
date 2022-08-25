#include <bits/stdc++.h>

using namespace std;

int g_cache[101][100001];
int g_weight[101];
int g_value[101];

int g_n;
int g_limit;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> g_n >> g_limit;

    for (int i = 1; i <= g_n; ++i) cin >> g_weight[i] >> g_value[i];

    for (int i = 1; i <= g_n; ++i) {
        for (int j = 1; j <= g_limit; ++j) {
            if (j >= g_weight[i]) {
                g_cache[i][j] = max(g_cache[i - 1][j], g_cache[i - 1][j - g_weight[i]] + g_value[i]);
            } else {
                g_cache[i][j] = g_cache[i - 1][j];
            }
        }
    }

    cout << g_cache[g_n][g_limit] << '\n';

    return 0;
}

// cannot solve

