#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    int m;
    cin >> n >> m;

    unordered_map<string, bool> mp;
    while (n > 0) {
        string str;
        cin >> str;

        mp[str] = true;
        n--;
    }

    vector<string> v;
    while (m > 0) {
        string str;
        cin >> str;

        if (mp[str]) v.push_back(str);
        m--;
    }

    sort(v.begin(), v.end());

    cout << v.size() << '\n';

    for (const auto &str : v) cout << str << '\n';

    return 0;
}

