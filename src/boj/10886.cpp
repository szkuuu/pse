#include <bits/stdc++.h>

using namespace std;

int g_cute[2];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int item;
        cin >> item;
        ++g_cute[item];
    }

    cout <<  "Junhee is" << (g_cute[0] < g_cute[1] ? " " : " not ") << "cute!";

    return 0;
}

//

