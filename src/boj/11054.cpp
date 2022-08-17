#include <bits/stdc++.h>

using namespace std;

int g_n;
int g_max = INT_MIN;
int g_arr[1000];
int g_up[1000];
int g_down[1000];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> g_n;

    for (int i = 0; i < g_n; ++i) cin >> g_arr[i];

    for (int i = 0; i < g_n; ++i) {
        g_up[i] = 1;
        g_down[g_n - 1 - i] = 1;

        for (int j = 0; j < i; ++j) {
            if (g_arr[i] > g_arr[j]) {
                g_up[i] = max(g_up[i], g_up[j] + 1);
            }
        }

        for (int j = g_n - 1; j > g_n - 1 - i; --j) {
            if (g_arr[g_n - 1 - i] > g_arr[j]) {
                g_down[g_n - 1 - i] = max(g_down[g_n - 1 - i], g_down[j] + 1);
            }
        }
    }

    for (int i = 0; i < g_n; ++i) g_max = max(g_max, g_up[i] + g_down[i] - 1);

    cout << g_max << '\n';

    return 0;
}

// 25 min. 12

