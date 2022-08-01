#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    int ret = 666;
    int his = ret + 1;

    while (n > 1) {
        int six_count = 0;
        int temp = his;

        while (temp != 0) {
            six_count = temp % 10 == 6 ? six_count + 1 : 0;
            if (six_count == 3) {
                ret = his;
                n--;
                break;
            }
            temp /= 10;
        }

        ++his;
    }

    cout << ret << '\n';

    return 0;
}

