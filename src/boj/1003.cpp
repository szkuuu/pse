#include <bits/stdc++.h>

using namespace std;

int g_zero[41] = {1, 0,};
int g_one[41] = {0, 1,};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for (int i = 2; i < 41; ++i) {
        g_zero[i] = g_zero[i - 1] + g_zero[i - 2];
        g_one[i] = g_one[i - 1] + g_one[i - 2];
    }

    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;

        cout << g_zero[n] << ' ' << g_one[n] << '\n';
    }

    return 0;
}

//

