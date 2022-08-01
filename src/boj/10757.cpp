#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string a;
    string b;
    ostringstream ss;

    cin >> a >> b;

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    const string &big = a.length() <= b.length() ? b : a;
    const string &small = a.length() <= b.length() ? a : b;

    int carry = 0;
    for (int i = 0; i < big.length(); ++i) {
        int big_e = big[i] - '0';
        int small_e = i >= small.length() ? 0 : small[i] - '0';

        int sum = (big_e + small_e + carry) % 10;
        ss << sum;

        carry = (big_e + small_e + carry) / 10;
    }

    if (carry != 0) ss << carry;

    string ret = ss.str();
    reverse(ret.begin(), ret.end());

    cout << ret << '\n';

    return 0;
}

