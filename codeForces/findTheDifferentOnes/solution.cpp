#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define alll(v) v.begin(), v.end()

void sol() {
  int n;
  cin >> n;
  vi a(n);
  for (auto &i : a) {
    cin >> i;
  }
  map<int, int> mp;
  vi idx(n, 0);
  int k = 0;
  for (int i = 1; i < n; i++) {
    idx[i] = k;
    if (a[i] != a[i - 1]) {
      mp[k] = i;
      idx[i] = ++k;
    }
  }
  int q;
  cin >> q;
  while (q--) {
    int l, r;
    cin >> l >> r;
    l--, r--;
    int i = idx[l];
    if (mp.count(i) == 0) {
      cout << -1 << " " << -1 << '\n';
      continue;
    }
    int need = mp[i];
    if (need <= r) {
      cout << l + 1 << " " << need + 1 << "\n";
    } else {
      cout << -1 << " " << -1 << '\n';
    }
  }
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
