#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    vector<int> v = {};
    int max = 0;

    for (int i = n; i > 0; --i) {
        int item;
        cin >> item;

        max = ::max(max, item);

        v.push_back(item);
    }

    double fake_sum = 0;
    for (auto &item : v) {
        fake_sum += ((item / static_cast<double>(max)) * 100);
    }

    cout << fake_sum / n << '\n';

    return 0;
}

