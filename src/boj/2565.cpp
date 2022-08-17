#include <bits/stdc++.h>

using namespace std;

int g_n;
int g_max = INT_MIN;
int g_cache[100];
vector<pair<int, int>> g_v;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> g_n;
    for (int i = 0; i < g_n; ++i) {
        int a;
        int b;
        cin >> a >> b;

        g_v.emplace_back(make_pair(a, b));
    }

    sort(g_v.begin(), g_v.end(), [](const auto &o0, const auto &o1) { return o0.first < o1.first; });

    for (int i = 0; i < g_n; ++i) {
        g_cache[i] = 1;

        for (int j = 0; j < i; ++j) {
            if (g_v[i].second > g_v[j].second) {
                g_cache[i] = max(g_cache[i], g_cache[j] + 1);
            }
        }

        g_max = max(g_max, g_cache[i]);
    }

    cout << g_n - g_max << '\n';

    return 0;
}

// cannot solve

