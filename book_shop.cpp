#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, x;

  if (!(cin >> n >> x))
    return 0;

  vector<int> prices(n + 1, 0), pages(n + 1, 0);

  for (int i = 0; i < n; i++)
    cin >> prices[i];
  for (int i = 0; i < n; i++)
    cin >> pages[i];

  vector<int> dp(x + 1, 0);

  for (int i = 0; i < n; i++) {
    for (int w = x; w >= prices[i]; w--)
      dp[w] = max(dp[w], dp[w - prices[i]] + pages[i]);
  }

  cout << dp[x] << endl;
}
