#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    int k;
    cin >> n >> k;

    vector<int> v;
    for (unsigned i = 0; i < n; ++i) {
        int item;
        cin >> item;
        v.push_back(item);
    }

    sort(v.begin(), v.end(), [](const int &o0, const int &o1) -> bool {
        return o0 > o1;
    });

    cout << v[k - 1] << '\n';

    return 0;
}

//

