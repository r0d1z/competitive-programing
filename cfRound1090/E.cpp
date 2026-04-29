#include <bits/stdc++.h>
#include <ios>

using namespace std;
typedef long long ll;

int main() {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int t, x;
  ll y;

  cin >> t;

  for (int i = 0; i < t; i++) {
    cin >> x;
    vector<ll> nums(x);
    for (int j = 0; j < x; j++) {
      cin >> y;
      nums[j] = y;
    }

    long long max_or = -102023;
    for (ll n : nums) {
      for (ll m : nums) {
        max_or = max(max_or, n ^ m);
      }
    }

    cout << max_or << endl;
  }
}
