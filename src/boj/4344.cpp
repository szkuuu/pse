#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cout.precision(3);
    cout << fixed;

    int c;
    cin >> c;

    while (c > 0) {
        int n;
        cin >> n;

        vector<int> v = {};
        int sum = 0;

        for (int i = n; i > 0; --i) {
            int item;
            cin >> item;
            v.push_back(item);
            sum += item;
        }

        double avg = sum / static_cast<double>(n);

        int over = 0;
        for (auto &item : v) {
            if (item > avg) ++over;
        }

        double ret = (over / static_cast<double>(n)) * 100.;

        cout << ret << '%' << '\n';
        c--;
    }

    return 0;
}

