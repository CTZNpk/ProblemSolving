#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<long long>
#define vi vector<int>

int main(int argc, char *argv[]) {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  ll n, k;

  cin >> n >> k;
  vector<vi> adj = vector<vector<int>>(n, vi(0));
  for (int i = 0; i < n - 1; i++) {
    int a, b;
    cin >> a >> b;

    adj[a - 1].push_back(b - 1);
    adj[b - 1].push_back(a - 1);
  }

  vi visited(n, 0);
  vi needed = vi(n, 0);

  int r = 0;
  for (int i = 0; i < k; i++) {
    ll p;
    cin >> p;
    r = p - 1;
    needed[p - 1] = 1;
  }

  auto f = [&](int curr, auto &&self) -> ll {
    visited[curr] = true;
    ll c = 0;
    for (auto i : adj[curr]) {
      if (!visited[i]) {
        c += self(i, self);
      }
    }
    if (c == 0) {
      if (needed[curr]) {
        return 1;
      } else {
        return 0;
      }
    } else {
      return c + 1;
    }
  };

  cout << f(r, f);
}
