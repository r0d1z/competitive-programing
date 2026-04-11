#include <bits/stdc++.h>
using namespace std;

int main() {

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m, k, temp1, temp2;
  vector<int> apart, aplic;

  cin >> n >> m >> k;

  for (int i = 0; i < n; i++) {
    cin >> temp1;
    aplic.push_back(temp1);
  }

  for (int i = 0; i < m; i++) {
    cin >> temp2;
    apart.push_back(temp2);
  }

  sort(apart.begin(), apart.end());
  sort(aplic.begin(), aplic.end());

  int ans = 0, i = 0, j = 0;

  while (1) {
    if (j == n || i == m)
      break;

    if (apart[i] >= aplic[j] - k && apart[i] <= aplic[j] + k) {
      ans++;
      i++;
      j++;
      continue;
    }
    if (apart[i] > aplic[j] + k) {
      j++;
      continue;
    }
    if (apart[i] < aplic[j] + k) {
      i++;
      continue;
    }
  }

  cout << ans << endl;

  return 0;
}
