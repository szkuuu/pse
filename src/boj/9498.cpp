#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int i;
    string ret = "";

    cin >> i;
    if (90 <= i && i <= 100) {
        ret = "A";
    } else if (80 <= i && i <= 89) {
        ret = "B";
    } else if (70 <= i && i <= 79) {
        ret = "C";
    } else if (60 <= i && i <= 69) {
        ret = "D";
    } else {
        ret = "F";
    }

    cout << ret << '\n';

    return 0;
}

