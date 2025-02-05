#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> p(N + 1);
        for (int i = 0; i <= N; ++i) {
            cin >> p[i];
        }

        vector<vector<int>> dp(N + 2, vector<int>(N + 2, 0));

        for (int l = 2; l <= N; ++l) {  // Length of the chain
            for (int i = 1; i <= N - l + 1; ++i) {
                int j = i + l - 1;
                dp[i][j] = INT_MAX;
                for (int k = i; k < j; ++k) {
                    int cost = dp[i][k] + dp[k + 1][j] + p[i - 1] * p[k] * p[j];
                    if (cost < dp[i][j]) {
                        dp[i][j] = cost;
                    }
                }
            }
        }

        cout << dp[1][N] << "\n";
    }

    return 0;
}
