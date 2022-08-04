#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    unordered_map<string, int> mp;
    for (int i = 0; i < t; ++i) {
        mp.clear();

        int n;
        cin >> n;

        for (int k = 0; k < n; ++k) {
            string item;
            string cat;
            cin >> item >> cat;

            ++mp[cat];
        }

        int acc = 1;
        for (const auto &[k, v] : mp) acc *= (v + 1);

        cout << acc - 1 << '\n';
    }
    return 0;
}

//

