#include <bits/stdc++.h>

using namespace std;

array<unsigned long, 1001> g_mod;
int g_n;
int g_m;
unsigned long g_ret = 0;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> g_n >> g_m;

    unsigned long sum = 0;
    for (int i = 0; i < g_n; ++i) {
        int item;
        cin >> item;

        sum += item;

        g_mod[sum % g_m]++;
    }

    for (int i = 0; i <= 1000; ++i) {
        g_ret += g_mod[i] * (g_mod[i] - 1) / 2;
    }

    g_ret += g_mod[0];

    cout << g_ret << '\n';

    return 0;
}

// cannot solve

