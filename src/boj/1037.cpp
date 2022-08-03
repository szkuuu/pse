#include <bits/stdc++.h>

using namespace std;

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

    sort(v.begin(), v.end());

    cout << v[0] * v[v.size() - 1] << '\n';

    return 0;
}

