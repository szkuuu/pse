#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    int cmp;
    ostringstream ss;

    cin >> n >> cmp;

    vector<int> v = {};

    for (int i = n; i > 0; --i) {
        int item;
        cin >> item;

        v.push_back(item);
    }

    for (auto& item : v) {
        if (item < cmp) {
            ss << item << ' ';
        }
    }

    cout << ss.str() << '\n';

    return 0;
}

