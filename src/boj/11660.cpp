#include <bits/stdc++.h>

using namespace std;

array<array<unsigned, 1024>, 1024> g_arr;
int g_n;
int g_m;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> g_n >> g_m;

    unsigned sum = 0;
    for (int i = 0; i < g_n; ++i) {
        for (int j = 0; j < g_n; ++j) {
            int item;
            cin >> item;

            sum += item;
            g_arr[i][j] = sum;
        }
    }

    for (int i = 0; i < g_m; ++i) {
        int x1;
        int y1;
        int x2;
        int y2;

        cin >> x1 >> y1 >> x2 >> y2;

        x1 -= 1;
        y1 -= 1;
        x2 -= 1;
        y2 -= 1;

        sum = 0;
        for (int k = x1; k <= x2; ++k) {
            sum += (g_arr[k][y2] - (y1 - 1 < 0 ? k - 1 < 0 ? 0 : g_arr[k - 1][g_n - 1] : g_arr[k][y1 - 1]));
        }

        cout << sum << '\n';
    }

    return 0;
}

//

