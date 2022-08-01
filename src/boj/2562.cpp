#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int max = INT_MIN;
    int idx = 0;

    for (int i = 0; i < 9; ++i) {
        int item;
        cin >> item;

        if (max < item) {
            max = item;
            idx = i + 1;
        }
    }

    cout << max << '\n' << idx << '\n';

    return 0;
}

