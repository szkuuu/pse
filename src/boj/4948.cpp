#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    bool arr[246913];
    fill(begin(arr), end(arr), false);

    arr[0] = true;
    arr[1] = true;

    for (int i = 2; i < size(arr); ++i) {
        if (arr[i]) continue;

        for (int j = i * 2; j < size(arr); j += i) {
            arr[j] = true;
        }
    }

    while (true) {
        int n;
        cin >> n;

        if (n == 0) break;

        int ret = 0;
        for (int i = n + 1; i <= (n * 2); ++i) {
            if (!arr[i]) ++ret;
        }

        cout << ret << '\n';
    }

    return 0;
}

