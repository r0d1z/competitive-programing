#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, x, t;

  cin >> t;
  for (int r = 0; r < t; r++) {
    cin >> n;

    int blocks[n + 1][3];
    int soma = n;

    for (int i = 1; i <= n; i++) {

      blocks[i][0] = i;
      blocks[i][1] = blocks[i][0] + soma;
      blocks[i][2] = blocks[i][1] + 1;

      soma++;
    }

    for (int i = 1; i <= n; i++) {
      for (int j = 0; j < 3; j++) {
        cout << blocks[i][j] << " ";
      }
    }
  }
}
