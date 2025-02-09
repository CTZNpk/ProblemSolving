#include <bits/stdc++.h>

using namespace std;
#define vi vector<int>
#define ll long long
#define vll vector<ll>
#define all(v) v.begin(), v.end()

void sol() {
  int n, m;
  cin >> n >> m;
  vll a(n);
  for (auto &i : a) {
    cin >> i;
  }
  vll b(m);

  for (auto &i : b) {
    cin >> i;
  }

  a[0] = min(b[0] - a[0], a[0]);
  for (int i = 1; i < n; i++) {
    ll poss1 = b[0] - a[i];
    ll poss2 = a[i];
    if (poss1 < poss2) {
      if (poss1 < a[i - 1]) {
        if (poss2 < a[i - 1]) {
          cout << "NO\n";
          return;
        } else {
          a[i] = poss2;
        }
      } else {
        a[i] = poss1;
      }
    } else {
      if (poss2 < a[i - 1]) {
        if (poss1 < a[i - 1]) {
          cout << "NO\n";
          return;
        } else {
          a[i] = poss1;
        }
      } else {
        a[i] = poss2;
      }
    }
  }

  cout << "YES\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
