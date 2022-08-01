#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while (t > 0) {
        int h;
        int w;
        int n;

        cin >> h >> w >> n;

        int ret = (((n - 1) % h) + 1) * 100 + ceil(n / static_cast<double>(h));

        cout << ret << '\n';

        t--;
    }

    return 0;
}

