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

    sort(v.begin(), v.end());

    int m;
    cin >> m;

    while (m > 0) {
        int item;
        cin >> item;

        cout << distance(lower_bound(v.begin(), v.end(), item), upper_bound(v.begin(), v.end(), item)) << ' ';
        m--;
    }

    return 0;
}

