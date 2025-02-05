#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>

vi dp(1000001, -1);
bool dfs(int left, vi &a) {
  if (left == 0)
    return 0;
  if (dp[left] != -1) {
    return dp[left];
  }
  int res = 0;
  for (auto &i : a) {
    if ((left - i) >= 0) {
      res |= (dfs(left - i, a) ^ 1);
    }
  }
  return dp[left] = res;
};

int main(int argc, char *argv[]) {
  int n, k;
  cin >> n >> k;
  vi a(n);
  for (auto &i : a) {
    cin >> i;
  }

  dfs(k, a);
  if (dp[k]) {
    cout << "First\n";
  } else {
    cout << "Second\n";
  }

  return 0;
}
