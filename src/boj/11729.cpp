#include <bits/stdc++.h>

using namespace std;

static ostringstream global_ss;

static void hanoi(int n, int from = 1, int bridge = 2, int to = 3) {
    if (n == 1) {
        global_ss << from << ' ' << to << '\n';
        return;
    }

    hanoi(n - 1, from, to, bridge);
    global_ss << from << ' ' << to << '\n';
    hanoi(n - 1, bridge, from, to);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    int min_try = pow(2, n) - 1;
    cout << min_try << '\n';

    hanoi(n);

    cout << global_ss.str() << '\n';

    return 0;
}

