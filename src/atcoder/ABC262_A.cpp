#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    int y;
    cin >> y;
 
    y = y % 4 == 3 ? y + 1 : y;
 
    cout << (y / 4) * 4 + 2 << "\n";
 
    return 0;
}
 
//
