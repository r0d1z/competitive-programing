#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string s;
  if (!(cin >> s))
    return 0;

  vector<int> freq(26, 0);
  for (char c : s) {
    freq[c - 'A']++;
  }

  int odd_idx = -1;
  int odd_count = 0;
  for (int i = 0; i < 26; i++) {
    if (freq[i] % 2 != 0) {
      odd_count++;
      odd_idx = i;
    }
  }

  if (odd_count > 1) {
    cout << "NO SOLUTION" << "\n";
    return 0;
  }

  string first_half = "";
  string middle = "";

  for (int i = 0; i < 26; i++) {
    if (i == odd_idx) {
      middle = string(freq[i], (char)('A' + i));
    } else {
      first_half += string(freq[i] / 2, (char)('A' + i));
    }
  }

  string second_half = first_half;
  reverse(second_half.begin(), second_half.end());

  cout << first_half << middle << second_half << "\n";

  return 0;
}
