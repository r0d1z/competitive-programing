#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;

    long long ans = 1;
    long long mod = 1e9 + 7;

    for (int i = 0; i < n; i++) {
        ans = (ans * 2) % mod;
    }

    cout << ans << endl;

    return 0;
}
