#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    vector<int> v;
    for (int i = 0; i < n; ++i) {
        int item;
        cin >> item;

        v.push_back(item);
    }

    for (auto iter = v.begin() + 1; iter != v.end(); ++iter) {
        int gcd_value = gcd(v[0], *iter);

        cout << (v[0] / gcd_value) << '/' << (*iter / gcd_value) << '\n';
    }

    return 0;
}

// 5min. 27.

