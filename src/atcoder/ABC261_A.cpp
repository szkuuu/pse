#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
 
    int start = max(l1, l2);
    int end = min(r1, r2);
 
    int res = 0;
    for (int i = start; i < end; ++i) ++res;
 
    cout << res << '\n';
 
    return 0;
}
 
//
