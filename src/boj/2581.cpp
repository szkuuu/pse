#include <bits/stdc++.h>

using namespace std;

static bool isprime(int n, int d) {
    if (n == 1) return false;
    if (static_cast<int>(round(sqrt(n))) < d) return true;

    return n % d == 0 ? false : isprime(n, d + 1);
}

static bool isprime(int n) { return isprime(n, 2); }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a;
    int b;

    cin >> a;
    cin >> b;

    int sum = 0;
    int i = a;
    int min = 10001;
    while (i <= b) {
        if (isprime(i)) {
            min = ::min(min, i);
            sum += i;
        }
        ++i;
    }

    if (sum == 0) {
        cout << -1 << '\n';
    } else {
        cout << sum << '\n';
        cout << min << '\n';
    }

    return 0;
}

