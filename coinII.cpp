#include <bits/stdc++.h>

using namespace std;

int main() {

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, sum, temp;
  const int MOD = 1e9 + 7;
  vector<int> num;

  cin >> n >> sum;

  for (int i = 0; i < n; i++) {
    cin >> temp;
    num.push_back(temp);
  }

  vector<int> dp(sum + 1, 0);

  dp[0] = 1;

  for (int i = 0; i < n; i++) {
    for (int v = num[i]; v <= sum; v++) {
      dp[v] = dp[v] + dp[v - num[i]];
      if (dp[v] >= MOD)
        dp[v] -= MOD;
    }
  }

  cout << dp[sum] << endl;

  return 0;
}
