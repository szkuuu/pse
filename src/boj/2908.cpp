#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string a;
    string b;

    cin >> a >> b;

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    int r_a = stoi(a);
    int r_b = stoi(b);

    cout << max(r_a, r_b) << '\n';

    return 0;
}

