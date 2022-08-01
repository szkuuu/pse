#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string str;
    getline(cin, str);

    bool find_ch = true;
    int ret = 0;

    for (const auto &ch : str) {
        if (find_ch && ch != ' ') ret++;
        find_ch = ch == ' ';
    }

    cout << ret << '\n';

    return 0;
}

