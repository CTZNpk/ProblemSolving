#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define all(v) v.begin(), v.end()
#define vll vector<ll>

struct DSU {
  vi f, size;
  DSU() {}

  DSU(int n) {
    f.resize(n);
    iota(all(f), 0);
    size.assign(n, 1);
  }

  int find(int x) {
    while (x != f[x]) {
      x = f[x] = f[f[x]];
    }
    return x;
  }

  bool isSame(int a, int b) { return find(a) == find(b); }

  bool merge(int a, int b) {
    int x = find(a);
    int y = find(b);
    if (x == y) {
      return false;
    }
    if (size[x] > size[y]) {
      swap(x, y);
    }
    size[x] += size[y];
    f[y] = x;
    return true;
  }
};

void sol() {
  int n, m1, m2;
  cin >> n >> m1 >> m2;
  vector<pair<int, int>> f;
  for (int i = 0; i < m1; i++) {
    int u, v;
    cin >> u >> v;
    u--, v--;
    f.push_back({u, v});
  }
  DSU g(n);
  int cg = n;
  for (int i = 0; i < m2; i++) {
    int u, v;
    cin >> u >> v;
    u--;
    v--;
    cg -= g.merge(u, v);
  }

  int cf = n;
  DSU fg(n);
  int ans = 0;
  for (auto [u, v] : f) {
    if (g.isSame(u, v)) {
      cf -= fg.merge(u, v);
    } else {
      ans++;
    }
  }
  ans += cf - cg;
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
