#include <bits/stdc++.h>

using namespace std;

int g_n;
int g_cache[10000];
int g_res;

void recur(int n, int t) {
    if (g_cache[t] == 1 || n == 1) {
        g_cache[t] = 1;
        g_res = t;
        return;
    }

    g_cache[t] = n;

    if (n % 3 == 0) {
        recur(n / 3, t + 1);
    }
    if (n % 2 == 0) {
        recur(n / 2, t + 1);
    }

    recur(n - 1, t + 1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> g_n;

    recur(g_n, 0);

    cout << g_res << '\n';

    return 0;
}

// 21 min. 52

