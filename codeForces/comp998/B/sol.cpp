#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define all(v) v.begin(), v.end()
#define vll vector<ll>

void sol() {
  int n, m;
  cin >> n >> m;
  vector<vi> a(n, vi(m, 0));
  for (auto &i : a) {
    for (auto &j : i) {
      cin >> j;
    }
  }
  for (auto &i : a) {
    sort(all(i));
  }
  vi perm;
  vector<pair<int, int>> first;
  for (int i = 0; i < n; i++) {
    first.push_back({a[i][0], i});
  }
  sort(all(first));
  for (auto &i : first) {
    perm.push_back(i.second);
  }
  int curr = -1;
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      if (a[perm[j]][i] <= curr) {
        cout << -1 << "\n";
        return;
      } else {
        curr = a[perm[j]][i];
      }
    }
  }
  for (auto &i : perm) {
    cout << i + 1 << " ";
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
