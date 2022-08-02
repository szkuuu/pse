#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    string str = to_string(n);

    sort(str.begin(), str.end());
    reverse(str.begin(), str.end());

    cout << stoi(str) << '\n';

    return 0;
}

