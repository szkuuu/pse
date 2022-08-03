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

    int res;
    for (int i = 0, j = i + 1; j < v.size(); ++i, ++j) {
        if (i == 0) {
            res = abs(v[1] - v[0]);
            continue;
        }

        res = gcd(res, abs(v[j] - v[i]));
    }

    vector<int> ret;
    for (int i = 2; i <= sqrt(res); ++i) {
        if (res % i == 0) {
            ret.push_back(i);
            if (i != res / i) ret.push_back(res / i);
        }
    }
    ret.push_back(res);

    sort(ret.begin(), ret.end());

    for (const auto &item : ret) cout << item << ' ';
    cout << '\n';

    return 0;
}

