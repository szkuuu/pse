#include <bits/stdc++.h>

using namespace std;

static bool is_prime(int n, int d) {
    if (n == 1) return false;
    if (static_cast<int>(round(sqrt(n))) < d) return true;

    return n % d == 0 ? false : is_prime(n, d + 1);
}

static bool is_prime(int n) { return is_prime(n, 2); }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    int ret = 0;
    while (n > 0) {
        int item;
        cin >> item;

        if (is_prime(item)) ++ret;
        n--;
    }

    cout << ret << '\n';

    return 0;
}

