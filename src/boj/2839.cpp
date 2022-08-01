#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    int ret;

    if (n <= 5) {
        ret = (n == 3 || n == 5) ? 1 : -1;
    } else {
        int q = n / 5;
        int r = n % 5;

        switch (r) {
            case 0:
                ret = q;
                break;

            case 1:
                ret = q + 1;
                break;

            case 2:
                ret = n == 7 ? -1 : q + 2;
                break;

            case 3:
                ret = q + 1;
                break;

            case 4:
                ret = q + 2;
                break;

            default:
                ret = -1;
                break;
        }
    }

    cout << ret << '\n';

    return 0;
}

