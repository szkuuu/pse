#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int p_tri[31][31];

    p_tri[0][0] = 1;
    p_tri[1][0] = 1;
    p_tri[1][1] = 1;

    for (int i = 2; i < 31; ++i) {
        for (int j = 0; j <= i; ++j) {
            p_tri[i][j] = j == 0 || i == j ? 1 : p_tri[i - 1][j] + p_tri[i - 1][j - 1];
        }
    }

    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int m;
        int n;
        cin >> n >> m;

        cout << p_tri[m][n] << '\n';
    }

    return 0;
}

// 8 min. 15

