#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    map<int, bool> mp;

    for (int i = n; i > 0; --i) {
        int item;
        cin >> item;

        mp[item] = true;
    }

    int m;
    cin >> m;

    for (int i = m; i > 0; --i) {
        int item;
        cin >> item;

        cout << (mp[item] ? 1 : 0) << ' ';
    }
    cout << '\n';

    return 0;
}

