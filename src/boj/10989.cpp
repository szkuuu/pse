#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int arr[10001] = {0,};

    int n;
    cin >> n;

    int max = INT_MIN;
    int min = INT_MAX;

    ostringstream ss;

    while (n > 0) {
        int item;
        cin >> item;

        arr[item]++;

        max = ::max(max, item);
        min = ::min(min, item);

        n--;
    }

    for (int i = min; i <= max; ++i) {
        if (arr[i] == 0) continue;

        for (int j = arr[i]; j > 0; --j) cout << i << '\n';
    }

    return 0;
}

