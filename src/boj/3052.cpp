#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int remains[42] = { 0, };

    for (int i = 10; i > 0; --i) {
        int item;
        cin >> item;

        ++remains[item % 42];
    }

    int ret = 0;
    for (auto &item : remains) {
        if (item > 0) ++ret;
    }

    cout << ret << '\n';

    return 0;
}

