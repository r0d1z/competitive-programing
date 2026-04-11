#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int main() {

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int ans = 1, n;
  long long x, y;

  cin >> n;

  vector<pair<ll, ll>> movies(n + 1, make_pair(0, 0));

  for (int i = 0; i < n; i++) {
    cin >> x >> y;
    movies[i].first = x;
    movies[i].second = y;
  }

  sort(movies.begin(), movies.end(),
       [](const pair<ll, ll> &a, const pair<ll, ll> &b) {
         return a.second < b.second;
       });

  pair<long, long> turn = make_pair(movies[1].first, movies[1].second);
  for (int i = 2; i <= n; i++) {
    if (i <= n && turn.second <= movies[i].first) {
      ans++;
      turn = movies[i];
      continue;
    }
  }

  cout << ans << endl;

  return 0;
}
