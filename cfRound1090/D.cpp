#include <bits/stdc++.h>

using namespace std;

// Atalhos para tipos comuns
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

// Macros para loops e debug
#define all(x) (x).begin(), (x).end()
#define fastio                                                                 \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);                                                                  \
  cout.tie(0);

const int MAX_N = 1500000;
vi primes;
bool is_prime[MAX_N + 1];

void sieve() {
  fill(is_prime, is_prime + MAX_N + 1, true);
  is_prime[0] = is_prime[1] = false;
  for (int i = 2; i <= MAX_N; i++) {
    if (is_prime[i]) {
      primes.push_back(i);
    }
    for (int p : primes) {
      if (i * (ll)p > MAX_N)
        break;
      is_prime[i * p] = false;
      if (i % p == 0)
        break;
    }
  }
}

void solve() {
  int n;
  if (!(cin >> n))
    return;
  if (n == 1) {
    cout << 2 << endl;
    return;
  }
  
  // a1 = p1, a2 = p1*p2, a3 = p2*p3...
  // GCDs: p1, p2, p3, p4... (todos distintos)
  cout << primes[0];
  for (int i = 1; i < n; i++) {
    cout << " " << (ll)primes[i - 1] * primes[i];
  }
  cout << endl;
}

int main() {
  fastio;

  sieve();

  int t = 1;
  cin >> t; // Comente esta linha se o problema tiver apenas um caso de teste

  while (t--) {
    solve();
  }

  return 0;
}
