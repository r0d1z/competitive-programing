#include <bits/stdc++.h>
#include <string>

using namespace std;

int main() {

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string n;
  if (!(cin >> n))
    return 0;

  int inf = 1000007;
  int resul = 0;

  while (inf > 0) {
    int digits = n.size();
    int maxy = 0;
    for (int i = 0; i < digits; i++) {
      maxy = max(maxy, n[i] - '0');
    }

    int num = stoi(n);
    inf = num - maxy;
    n = to_string(inf);
    resul++;
  }

  printf("%d\n", resul);

  return 0;
}
