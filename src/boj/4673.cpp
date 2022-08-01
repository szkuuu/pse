#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    const int MAX = 10001;

    bool numbers[MAX] = { false, };

    for (int i = 1; i < MAX; ++i) {
        if (numbers[i]) continue;

        int next = i;

        while (true) {
            int acc = next;

            while (acc != 0) {
                next += (acc % 10);
                acc /= 10;
            }

            if (next > MAX) break;

            numbers[next] = true;
        }
    }

    for (int i = 1; i < MAX; ++i) {
        if (!numbers[i]) cout << i << '\n';
    }

    return 0;
}

