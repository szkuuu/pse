#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    int five_count = 0;

    while (n > 1) {
        int temp = n;

        while (true) {
            if (temp % 5 != 0) break;

            ++five_count;
            temp /= 5;
        }

        n--;
    }

    cout << five_count << '\n';
    return 0;
}

// 12 min. 19

