#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int numbers[8001] = {0,};

    int min = INT_MAX;
    int max = INT_MIN;
    int count_max = INT_MIN;

    int n;
    cin >> n;

    int sum = 0;
    for (int i = n; i > 0; --i) {
        int item;
        cin >> item;

        ++numbers[item + 4000];
        sum += item;
        count_max = ::max(count_max, numbers[item + 4000]);
        min = ::min(item, min);
        max = ::max(item, max);
    }
    int avg = static_cast<int>(round(sum / static_cast<double>(n)));
    int rng = max - min;

    vector<int> count_max_elements = {};
    for (int i = 0; i < 8001; ++i) {
        if (numbers[i] == count_max) count_max_elements.push_back(i - 4000);
        if (count_max_elements.size() > 1) break;
    }
    int mel = count_max_elements.size() > 1 ? count_max_elements[1] : count_max_elements[0];

    int count = 0;
    int center = 0;
    for (int i = 0; i < 8001; ++i) {
        if (numbers[i] == 0) continue;

        count += numbers[i];
        if (count > n / 2) {
            center = i - 4000;
            break;
        }
    }

    cout << avg << '\n' << center << '\n' << mel << '\n' << rng << '\n';

    return 0;
}

