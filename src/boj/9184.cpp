#include <bits/stdc++.h>

using namespace std;

int g_cache[21][21][21];

int recur(int a, int b, int c) {
    if (a <= 0 || b <= 0 || c <= 0) return 1;

    if (g_cache[a][b][c - 1] == 0) g_cache[a][b][c - 1] = recur(a, b, c - 1);
    if (g_cache[a][b - 1][c - 1] == 0) g_cache[a][b - 1][c - 1] = recur(a, b - 1, c - 1);
    if (g_cache[a][b - 1][c] == 0) g_cache[a][b - 1][c] = recur(a, b - 1, c);

    if (g_cache[a - 1][b][c] == 0) g_cache[a - 1][b][c] = recur(a - 1, b, c);
    if (g_cache[a - 1][b - 1][c] == 0) g_cache[a - 1][b - 1][c] = recur(a - 1, b - 1, c);
    if (g_cache[a - 1][b][c - 1] == 0) g_cache[a - 1][b][c - 1] = recur(a - 1, b, c - 1);
    if (g_cache[a - 1][b - 1][c - 1] == 0) g_cache[a - 1][b - 1][c - 1] = recur(a - 1, b - 1, c - 1);

    if (a < b && b < c) return g_cache[a][b][c - 1] + g_cache[a][b - 1][c - 1] - g_cache[a][b - 1][c];

    return g_cache[a - 1][b][c] + g_cache[a - 1][b - 1][c] + g_cache[a - 1][b][c - 1] - g_cache[a - 1][b - 1][c - 1];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (true) {
        int a;
        int b;
        int c;
        cin >> a >> b >> c;

        if (a == -1 && b == -1 && c == -1) break;

        int _a = (a <= 0 || b <= 0 || c <= 0) ? 0 : (a > 20 || b > 20 || c > 20 ) ? 20 : a;
        int _b = (a <= 0 || b <= 0 || c <= 0) ? 0 : (a > 20 || b > 20 || c > 20 ) ? 20 : b;
        int _c = (a <= 0 || b <= 0 || c <= 0) ? 0 : (a > 20 || b > 20 || c > 20 ) ? 20 : c;

        cout << "w(" << a << ", " << b << ", " << c << ") = " << recur(_a, _b, _c) << '\n';
    }

    return 0;
}

// 37 min. 7

