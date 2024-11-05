#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>

void sol() {
  int n;
  cin >> n;

  vector<vi> adj(n);
  for (int i = 0; i < n - 1; i++) {
    int k;
    cin >> k;
    adj[--k].push_back(i + 1);
  }

  string s;
  cin >> s;

  int cnt = 0;

  auto recur = [&](int v, auto &&self) -> int {
    if (adj[v].empty()) {
      if (s[v] == 'W') {
        return 1;
      }
      return -1;
    }
    int ans = s[v] == 'W' ? 1 : -1;
    for (int u : adj[v]) {
      ans += self(u, self);
    }
    if (ans == 0) {
      cnt++;
    }
    return ans;
  };
  recur(0, recur);
  cout << cnt << "\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
