#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    string str;

    cin >> n;
    cin >> str;

    int ret = 0;
    for (auto &item : str) {
        ret += item - '0';
    }

    cout << ret << '\n';

    return 0;
}

