#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()
#define pii pair<int, int>

struct DSU {
  vi f, s;
  DSU() {}
  DSU(int n) {
    f.resize(n);
    s.assign(n, 1);
    iota(all(f), 0);
  }

  int find(int a) {
    while (a != f[a]) {
      a = f[a] = f[f[a]];
    }
    return a;
  }

  bool merge(int a, int b) {
    int x = find(a);
    int y = find(b);
    if (y == x) {
      return false;
    }
    s[x] += s[y];
    f[y] = x;
    return true;
  }
};

void sol() {
  int n;
  cin >> n;
  DSU g(n);
  vi a(n);
  for (auto &i : a) {
    cin >> i;
  }
  vector<pii> so;
  so.push_back({a[0], 0});

  for (int i = 1; i < n; i++) {
    bool first = true;
    for (int j = so.size() - 1; j >= 0; j--) {
      if (so[j].first <= a[i]) {
        break;
      } else {
        if (first) {
          g.merge(so[j].second, i);
          first = false;
        } else
          g.merge(i, so[j].second);
        so.pop_back();
      }
    }
    int x = g.find(i);
    so.push_back({a[x], x});
  }
  for (int i = 0; i < n; i++) {
    cout << a[g.find(i)] << " ";
  }
  cout << "\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
