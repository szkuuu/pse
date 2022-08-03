#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (true) {
        int len[3] = {0,};
        cin >> len[0] >> len[1] >> len[2];

        if (len[0] == 0) break;

        sort(begin(len), end(len));

        bool istriangle = pow(len[0], 2) + pow(len[1], 2) == pow(len[2], 2);

        cout << (istriangle ? "right" : "wrong") << '\n';
    }

    return 0;
}

