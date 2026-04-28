#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, x;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int soma = 0, maior = -1000;
    for (int j = 0; j < 7; j++) {
      cin >> x;
      maior = max(maior, x);
      soma += -1 * x;
    }
    cout << soma + 2 * maior << endl;
  }

  return 0;
}
