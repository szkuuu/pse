#include <bits/stdc++.h>

using namespace std;

pair<unsigned long long, unsigned long long> get_fact_gcd(unsigned long long n) {
    unsigned long long two_count = 0;
    unsigned long long five_count = 0;

    for (unsigned long long i = 2; i <= n; i *= 2) {
        two_count += n / i;
    }

    for (unsigned long long i = 5; i <= n; i *= 5) {
        five_count += n / i;
    }

    return make_pair(two_count, five_count);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    unsigned long long n;
    unsigned long long m;
    cin >> n;
    cin >> m;

    auto gcd_n = get_fact_gcd(n);
    auto gcd_n_m = get_fact_gcd(n - m);
    auto gcd_m = get_fact_gcd(m);

    auto p = gcd_n.first - (gcd_m.first + gcd_n_m.first);
    auto q = gcd_n.second - (gcd_m.second + gcd_n_m.second);

    cout << min(p, q) << '\n';

    return 0;
}

