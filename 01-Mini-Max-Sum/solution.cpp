#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a[5];
    long long sum = 0, mn, mx;

    for (int i = 0; i < 5; i++) {
        cin >> a[i];
        sum += a[i];
    }

    mn = *min_element(a, a + 5);
    mx = *max_element(a, a + 5);

    cout << sum - mx << " " << sum - mn << endl;

    return 0;
}

