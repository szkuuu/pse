#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    int min = INT_MAX;
    int max = INT_MIN;

    for (int i = n; i > 0; --i) {
        int item;
        cin >> item;

        max = ::max(max, item);
        min = ::min(min, item);
    }

    cout << min << ' ' << max << '\n';

    return 0;
}

