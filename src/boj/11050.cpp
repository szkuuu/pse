#include <bits/stdc++.h>

using namespace std;

int factorial(int n) {
    int ret = 1;
    while (n > 0) {
        ret *= n;
        n--;
    }

    return ret;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    int k;
    cin >> n >> k;

    cout << factorial(n) / (factorial(n - k) * factorial(k)) << '\n';

    return 0;
}

//

