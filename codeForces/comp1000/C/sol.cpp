#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()
#define pii pair<int, int>

void sol() {
  int n;
  cin >> n;
  vector<pii> adjC(n, {0, -1});
  vector<vi> adj(n);
  vi f(n, -1);
  for (int i = 0; i < n - 1; i++) {
    int u, v;
    cin >> u >> v;
    u--, v--;
    adj[u].push_back(v);
    f[v] = u;
    adjC[u].first++;
    adjC[u].second = u;
  }
  if (n <= 2) {
    cout << 0 << "\n";
    return;
  }
  for (int i = 0; i < n; i++) {
    if (f[i] == -1) {
      adjC[i].first--;
      break;
    }
  }
  int ans = 0;
  for (int i = n - 1; i >= n - 2; i--) {
    sort(all(adjC));
    auto [outDeg, idx] = adjC[i];
    if (idx == -1) {
      ans -= 1;
      break;
    }
    if (f[idx] == -1) {
      ans -= 1;
      break;
    }
    ans += outDeg;
    if (i == n - 2) {
      break;
    }

    for (int k = 0; k < n; k++) {
      if (adjC[k].second == f[idx]) {
        adjC[k].first--;
        break;
      }
    }
    for (int j = 0; j < adj[idx].size(); j++) {
      f[adj[idx][j]] = -1;
    }
  }
  cout << ans + 1 << "\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
