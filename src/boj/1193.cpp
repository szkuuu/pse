#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    if (n == 1) {
        cout << 1 << '/' << 1 << '\n';
    } else {
        int start = 1;
        int end = 1;
        int acc = 1;

        int q = 0;
        int diff = 0;

        do {
            start += acc;
            ++acc;
            end += acc;

            q = acc;
            diff = n - start;
        } while (!(start <= n && n <= end));

        int left = q % 2 == 0 ? diff + 1 :  q - diff;
        int right = q - left + 1;

        cout << left << '/' << right << '\n';
    }

    return 0;
}

