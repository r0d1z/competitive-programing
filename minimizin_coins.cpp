#include <bits/stdc++.h>
#include <cmath>

using namespace std;
const int INF = 1e9;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, x;
  if (!(cin >> n >> x))
    return 0;

  vector<int> values(n + 1, 0);

  for (int i = 0; i < n; i++)
    cin >> values[i];

  vector<int> dp(x + 1, INF);

  dp[0] = 0;

  for (int i = 0; i < n; i++) {
    for (int v = values[i]; v <= x; v++)
      if (dp[v - values[i]] != INF)
        dp[v] = min(dp[v], dp[v - values[i]] + 1);
  }

  cout << (dp[x] == INF ? -1 : dp[x]) << endl;

  return 0;
}
