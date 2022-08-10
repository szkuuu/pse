#include <bits/stdc++.h>

using namespace std;

int g_arr[100001];
int g_cache[100001] = {0, };

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int item;
        cin >> item;

        g_arr[i] = item;
        g_cache[i] = item;
    }

    int max_sum = g_cache[0];
    for (int i = 1; i < n; ++i) {
        g_cache[i] = max(g_cache[i], g_cache[i - 1] + g_arr[i]);
        max_sum = max(g_cache[i], max_sum);
    }

    cout << max_sum << '\n';

    return 0;
}

// cannot solve

