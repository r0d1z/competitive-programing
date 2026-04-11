#include <bits/stdc++.h>

using namespace std;

int main() {

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, sum, lim;
  cin >> n;

  sum = (n * (n + 1)) / 2;

  if ((sum % 2)) {
    cout << "NO" << endl;
    return 0;
  }

  cout << "YES" << endl;

  sum /= 2;
  lim /= 2;

  vector<int> set1;
  vector<int> set2;

  int j = 1, t = n;

  while ()

    cout << set1.size() << endl;
  for (int i = 0; i < set1.size(); i++)
    cout << set1[i] << endl;

  cout << set2.size() << endl;
  for (int i = 0; i < set2.size(); i++)
    cout << set2[i] << endl;

  return 0;
}
