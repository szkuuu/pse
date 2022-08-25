#include <bits/stdc++.h>

using namespace std;

int g_n;
int g_rng;

int g_sum = 0;
int g_max = INT_MIN;
int g_arr[100000];
int g_sum_normal[100000];
int g_sum_reverse[100000];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> g_n >> g_rng;

    for (int i = 0; i < g_n; ++i) cin >> g_arr[i];
    g_sum_normal[0] = g_arr[0];
    g_sum_reverse[g_n - 1] = g_arr[g_n - 1];

    for (int i = 1; i < g_n; ++i) g_sum_normal[i] = g_sum_normal[i - 1] + g_arr[i];
    for (int i = g_n - 2; i >= 0; --i) g_sum_reverse[i] = g_sum_reverse[i + 1] + g_arr[i];

    g_sum = g_sum_normal[g_n - 1];

    for (int p = 0, q = g_rng; q <= g_n; ++p, ++q) {
        g_max = max(g_max, g_sum - (p - 1 < 0 ? 0 : g_sum_normal[p - 1]) - (q == g_n ? 0 : g_sum_reverse[q]));
    }

    cout << g_max << '\n';

    return 0;
}

//

