#include <bits/stdc++.h>
#include <numeric>

using namespace std;
#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()
#define pii pair<int, int>

struct DSU {
  vi f, size;
  DSU() {}

  DSU(int n) {
    f.resize(n);
    iota(all(f), 0);
    size.assign(n, 1);
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

void sol() {}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
