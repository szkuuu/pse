#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    vector<int> v;

    while (n > 0) {
        int item;
        cin >> item;

        v.push_back(item);
        n--;
    }

    vector<int> v2(v);
    sort(v2.begin(), v2.end());
    v2.erase(unique(v2.begin(), v2.end()), v2.end());

    for (const auto &item : v) {
        cout << distance(v2.begin(), lower_bound(v2.begin(), v2.end(), item)) << ' ';
    }
    cout << '\n';

    return 0;
}

