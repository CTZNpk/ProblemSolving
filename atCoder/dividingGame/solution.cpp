#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>

const int MAX = 100000;

int main(int argc, char *argv[]) {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int N;
  cin >> N;

  vi A(N);

  for (auto &i : A) {
    cin >> i;
  }

  vector<vi> f(MAX + 1);
  for (int i = 1; i <= MAX; i++) {
    for (int j = 2 * i; j <= MAX; j += i) {
      f[j].push_back(i);
    }
  }

  vi dp(MAX + 1, 0);

  for (int i = 2; i <= MAX; i++) {
    int cnt = f[i].size();
    vector<bool> used(cnt + 1, false);
    for (int j : f[i]) {
      if (dp[j] < cnt) {
        used[dp[j]] = true;
      }
    }
    while (used[dp[i]]) {
      dp[i]++;
    }
  }

  int g = 0;
  for (int i = 0; i < N; i++) {
    g ^= dp[A[i]];
  }

  if (g > 0) {
    cout << "Anna" << "\n";
  } else {
    cout << "Bruno" << "\n";
  }

  return 0;
}
