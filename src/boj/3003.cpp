#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int must_have[] = {1, 1, 2, 2, 2, 8};
    int now_have[6] = {0,};

    cin >> now_have[0] >> now_have[1] >> now_have[2] >> now_have[3] >> now_have[4] >> now_have[5];

    for (int i = 0; i < size(must_have); ++i) cout << must_have[i] - now_have[i] << ' ';
    cout << '\n';

    return 0;
}

//

