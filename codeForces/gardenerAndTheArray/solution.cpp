#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()

void sol() {
  int n;
  cin >> n;

  map<int, int> cnt;

  vector<vector<int>> c(n);
  for (int i = 0; i < n; i++) {
    int k;
    cin >> k;

    c[i].resize(k);
    for (auto &x : c[i]) {
      cin >> x;
      cnt[x]++;
    }
  }

  for (int i = 0; i < n; i++) {
    int ok = 1;
    for (auto x : c[i]) {
      if (cnt[x] == 1) {
        ok = 0;
        break;
      }
    }
    if (ok) {
      cout << "Yes\n";
      return;
    }
  }

  cout << "No\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
