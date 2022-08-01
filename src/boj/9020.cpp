#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    array<bool, 10001> arr;
    arr.fill(false);

    arr[0] = true;
    arr[1] = true;

    for (auto i = 2; i < size(arr); ++i) {
        if (arr[i]) continue;

        for (auto j = i * 2; j < size(arr); j += i) {
            arr[j] = true;
        }
    }

    int n;
    cin >> n;

    while (n > 0) {
        int t;
        cin >> t;

        int i = t / 2;
        while (i >= 2) {
            if (!arr[i] && !arr[t - i]) {
                cout << i << ' ' << t - i << '\n';
                break;
            }

            i--;
        }
        n--;
    }

    return 0;
}

