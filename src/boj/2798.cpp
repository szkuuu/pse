#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    int target;

    cin >> n >> target;

    vector<int> v = {};

    while (n > 0) {
        int item;
        cin >> item;

        v.push_back(item);
        n--;
    }

    int v_size = static_cast<int>(v.size());
    int min = INT_MAX;
    int ret = 0;

    for (int i = 0; i < v_size - 2; ++i) {
        for (int j = i + 1; j < v_size - 1; ++j) {
            for (int k = j + 1; k < v_size; ++k) {
                int sum = v[i] + v[j] + v[k];

                if (target - sum < 0) continue;

                int diff = target - sum;

                if (diff < min) {
                    min = diff;
                    ret = sum;

                    if (diff == 0) break;
                }
            }
        }
    }

    cout << ret << '\n';

    return 0;
}

