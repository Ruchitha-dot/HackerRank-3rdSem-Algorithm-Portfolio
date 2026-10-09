#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> candles(n);

    for (int i = 0; i < n; i++) {
        cin >> candles[i];
    }

    int tallest = *max_element(candles.begin(), candles.end());
    int count = 0;

    for (int height : candles) {
        if (height == tallest) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}

