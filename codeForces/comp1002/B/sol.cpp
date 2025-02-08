#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define vll vector<ll>
#define all(v) v.begin(), v.end()

void sol() {
  int n, k;
  cin >> n >> k;
  vll a(n);
  for (auto &i : a) {
    cin >> i;
  }
  if (n == k) {
    ll c = 1;
    for (int i = 1; i < n; i += 2) {
      if (a[i] != c) {
        break;
      }
      c++;
    }
    cout << c << "\n";
    return;
  }

  int cnt = n - k ;
  for (int i = 1; i < n; i++) {
    if (a[i] == 1) {
      if (i > cnt) {
        cout << 2 << "\n";
        return;
      }
    } else {
      cout << 1 << "\n";
      return;
    }
  }

  cout << 2 << "\n";
}
int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
