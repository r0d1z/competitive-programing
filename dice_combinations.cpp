#include <iostream>
#include <vector>

using namespace std;

/**
 * CSES 1633 - Dice Combinations
 * 
 * Concept:
 * dp[i] = number of ways to get sum i.
 * To reach sum i, the last throw could have been 1, 2, 3, 4, 5, or 6.
 * Therefore: dp[i] = dp[i-1] + dp[i-2] + dp[i-3] + dp[i-4] + dp[i-5] + dp[i-6].
 * 
 * Base Case:
 * dp[0] = 1 (one way to get sum 0: by throwing zero dice).
 * 
 * Modulo: 10^9 + 7
 */

int main() {
    int n;
    if (!(cin >> n)) return 0;

    const int MOD = 1000000007;
    vector<int> dp(n + 1, 0);

    // Base case: 1 way to get sum 0
    dp[0] = 1;

    // Fill the DP table iteratively
    for (int i = 1; i <= n; i++) {
        for (int die = 1; die <= 6; die++) {
            if (i - die >= 0) {
                dp[i] = (dp[i] + dp[i - die]) % MOD;
            }
        }
    }

    cout << dp[n] << endl;

    return 0;
}
