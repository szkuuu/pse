#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a;
    int b;
    cin >> a >> b;

    bool bs[1000001];
    fill(begin(bs), end(bs), false);

    bs[0] = true;
    bs[1] = true;

    for (int i = 2; i <= b; ++i) {
        if (bs[i]) continue;

        for (int j = i * 2; j <= b; j += i) {
            bs[j] = true;
        }
    }

    for (int i = a; i <= b; ++i) {
        if (!bs[i]) cout << i << '\n';
    }

    return 0;
}

