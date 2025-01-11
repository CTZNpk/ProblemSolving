
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define all(v) v.begin(), v.end()
#define pii pair<int, int>

void sol() {
  int n;
  cin >> n;
  vi a(n - 1);
  for (auto &i : a) {
    cin >> i;
  }

  vi ans(n);
  ans[0] = a[0];
  for (int i = 1; i < n - 1; i++) {
    ans[i] = a[i - 1] | a[i];
  }
  ans[n - 1] = a[n - 2];
  for (int i = 1; i < n; i++) {
    if ((ans[i] & ans[i - 1]) != a[i - 1]) {
      cout << -1 << "\n";
      return;
    }
  }
  for (auto &i : ans) {
    cout << i << " ";
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
