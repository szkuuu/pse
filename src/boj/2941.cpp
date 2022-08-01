#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string str;
    cin >> str;

    regex kword("c=|c-|dz=|d-|lj|nj|s=|z=");

    cout << regex_replace(str, kword, "K").length() << '\n';

    return 0;
}

