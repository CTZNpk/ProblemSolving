#include <bits/stdc++.h>

using namespace std;
#define vi vector<int>
#define ll long long
#define vll vector<ll>
#define all(v) v.begin(), v.end()

void sol() {
  int n, m;
  cin >> n >> m;
  vector<vi> a(n, vi(m, 0));
  for (auto &i : a) {
    for (auto &j : i) {
      cin >> j;
    }
  }
  vector<pair<ll, int>> score(n, {0, -1});
  for (int i = 0; i < n; i++) {
    score[i].second = i;
    for (int j = 0; j < m; j++) {
      score[i].first += a[i][j];
    }
  }
  sort(all(score));

  ll ans = 0;
  ll pre = 0;
  for (auto &i : a[score[n - 1].second]) {
    pre += i;
    ans += pre;
  }
  for (int i = n - 2; i >= 0; i--) {
    for (int j = 0; j < m; j++) {
      pre += a[score[i].second][j];
      ans += pre;
    }
  }
  cout << ans << "\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
