#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    int k;
    cin >> n >> k;

    int ret;
    int p_tri[1001][1001] = {0, };

    bool find = false;
    for (int i = 0; i < 1001; ++i) {
        for (int j = 0; j <= i; ++j) {
            if (i <= 1 && j <= 1) {
                p_tri[i][j] = 1;
            } else {
                int cell = j == 0 || j == i ? 1 : (p_tri[i - 1][j] + p_tri[i - 1][j - 1]) % 10007;
                p_tri[i][j] = cell;
            }

            if (n == i && k == j) {
                ret = p_tri[i][j];
                find = true;
                break;
            }
        }
        if (find) break;
    }

    cout << ret << '\n';

    return 0;
}

//

