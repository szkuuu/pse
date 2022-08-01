#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string str;
    cin >> str;

    int ret = 0;
    for (const auto &ch : str) {
        int dial =
                'A' <= ch && ch <= 'C' ? 2 :
                'D' <= ch && ch <= 'F' ? 3 :
                'G' <= ch && ch <= 'I' ? 4 :
                'J' <= ch && ch <= 'L' ? 5 :
                'M' <= ch && ch <= 'O' ? 6 :
                'P' <= ch && ch <= 'S' ? 7 :
                'T' <= ch && ch <= 'V' ? 8 :
                'W' <= ch && ch <= 'Z' ? 9 : 1;

        ret += dial;
        ++ret;
    }

    cout << ret << '\n';

    return 0;
}

