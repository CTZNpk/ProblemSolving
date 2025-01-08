
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define all(v) v.begin(), v.end()
#define vi vector<int>
#define pii pair<int, int>

void sol() {
  int n, m, k;
  cin >> n >> m >> k;
  vi a(m);
  for (auto &i : a) {
    cin >> i;
  }
  vi q(k);
  string ans = "";
  int idx = 1;
  int idxDontKnow = -1;
  for (auto &i : q) {
    cin >> i;
    if (idx != i) {
      idxDontKnow = idx;
      idx++;
    }
    idx++;
  }
  if (k != n && idxDontKnow == -1) {
    idxDontKnow = n;
  }
  // cout << idxDontKnow << "\n";
  if (k < n - 1) {
    for (int i = 0; i < m; i++) {
      ans += '0';
    }
  } else {

    for (int i = 0; i < m; i++) {
      if (idxDontKnow == -1 || a[i] == idxDontKnow) {
        ans += '1';
      } else {
        ans += '0';
      }
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
