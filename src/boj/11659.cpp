#include <bits/stdc++.h>

using namespace std;

int g_n;
int g_t;

int g_arr[100000];
int g_sum = 0;
int g_sum_normal[100000];
int g_sum_reverse[100000];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> g_n >> g_t;

    for (int i = 0; i < g_n; ++i) {
        cin >> g_arr[i];
        g_sum += g_arr[i];
    }

    g_sum_normal[0] = g_arr[0];
    g_sum_reverse[0] = g_arr[g_n - 1];

    for (int i = 1; i < g_n; ++i) {
        g_sum_normal[i] = g_sum_normal[i - 1] + g_arr[i];
        g_sum_reverse[i] = g_sum_reverse[i - 1] + g_arr[g_n - 1 - i];
    }

    for (int i = 0; i < g_t; ++i) {
        int s;
        int e;

        cin >> s >> e;

        cout << g_sum - (s - 2 < 0 ? 0 : g_sum_normal[s - 2]) - (g_n - e - 1 < 0 ? 0 : g_sum_reverse[g_n - e - 1]) << '\n';
    }

    return 0;
}

//

