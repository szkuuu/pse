#include <bits/stdc++.h>

using namespace std;

static int rec(int o0, int o1) {
    if (o0 == 1) {
        int temp = 0;

        while (o1 > 0) {
            temp += o1;
            --o1;
        }

        return temp;
    }
    if (o1 == 1) return 1;

    return rec(o0, o1 - 1) + rec(o0 - 1, o1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while (t > 0) {
        int k;
        int n;

        cin >> k;
        cin >> n;

        cout << rec(k, n) << '\n';

        t--;
    }

    return 0;
}

