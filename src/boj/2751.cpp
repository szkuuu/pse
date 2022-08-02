#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v = {};

    while (n > 0) {
        int item;
        cin >> item;

        v.push_back(item);

        n--;
    }

    sort(v.begin(), v.end());

    for (const auto &item : v) cout << item << '\n';

    return 0;
}

