
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<ll>

int main() {
  int N, W;
  cin >> N >> W;

  vector<pair<int, int>> items(N);
  int sum_values = 0;
  for (int i = 0; i < N; ++i) {
    int w, v;
    cin >> w >> v;
    items[i] = {w, v};
    sum_values += v;
  }

  const long long INF = 1e18;
  vector<long long> dp(sum_values + 1, INF);
  dp[0] = 0;

  for (const auto &item : items) {
    int w = item.first;
    int v = item.second;
    for (int curr_val = sum_values; curr_val >= 0; --curr_val) {
      if (dp[curr_val] != INF && curr_val + v <= sum_values) {
        if (dp[curr_val] + w < dp[curr_val + v]) {
          dp[curr_val + v] = dp[curr_val] + w;
        }
      }
    }
  }

  int max_val = 0;
  for (int val = sum_values; val >= 0; --val) {
    if (dp[val] <= W) {
      max_val = val;
      break;
    }
  }

  cout << max_val << endl;
  return 0;
}
