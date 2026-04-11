#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    if (!(cin >> n >> m)) return 0;

    vector<int> x(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }

    int MOD = 1e9 + 7;
    // dp[i][v] = número de formas de preencher o prefixo até i terminando com o valor v
    vector<vector<int>> dp(n, vector<int>(m + 1, 0));

    // Caso base: primeira posição (i = 0)
    if (x[0] == 0) {
        // Se for 0, pode ser qualquer valor entre 1 e m
        for (int v = 1; v <= m; v++) {
            dp[0][v] = 1;
        }
    } else {
        // Se tiver um valor fixo, apenas esse valor é possível
        dp[0][x[0]] = 1;
    }

    // Transição para as demais posições
    for (int i = 1; i < n; i++) {
        if (x[i] == 0) {
            // Se a posição atual for 0, testamos todos os valores v possíveis de 1 a m
            for (int v = 1; v <= m; v++) {
                for (int prev_v : {v - 1, v, v + 1}) {
                    if (prev_v >= 1 && prev_v <= m) {
                        dp[i][v] = (dp[i][v] + dp[i - 1][prev_v]) % MOD;
                    }
                }
            }
        } else {
            // Se a posição atual tiver um valor fixo v, calculamos apenas para ele
            int v = x[i];
            for (int prev_v : {v - 1, v, v + 1}) {
                if (prev_v >= 1 && prev_v <= m) {
                    dp[i][v] = (dp[i][v] + dp[i - 1][prev_v]) % MOD;
                }
            }
        }
    }

    // O resultado final é a soma de todas as formas de terminar na última posição n-1
    int ans = 0;
    for (int v = 1; v <= m; v++) {
        ans = (ans + dp[n - 1][v]) % MOD;
    }

    cout << ans << endl;

    return 0;
}
