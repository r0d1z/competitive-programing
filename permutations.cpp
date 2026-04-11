#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  if (!(cin >> n))
    return 0;

  if (n == 1) {
    cout << 1 << endl;
    return 0;
  }

  if (n <= 3) {
    cout << "NO SOLUTION" << endl;
    return 0;
  }

  int it = 0;

  if (n % 2 != 0)
    it = (n + 1) / 2;
  else
    it = n / 2;

  int begin = n - 1;
  int i = 1;

  cout << begin;

  while (i < n) {
    begin = begin - 2;
    i++;

    if (begin <= 0)
      begin = n;

    cout << " " << begin;
  }

  cout << "\n";

  return 0;
}
