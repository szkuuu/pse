#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    vector<int> v = {};

    cin >> n;

    int d = 2;
    while (n != 1) {
        if (round(sqrt(n)) < d) {
            v.push_back(n);
            break;
        }

        if (n % d == 0) {
            v.push_back(d);
            n /= d;
            d = 2;
            continue;
        } else {
            d += 1;
            continue;
        }
    }

    for (const auto &item : v) {
        cout << item << '\n';
    }

    return 0;
}

