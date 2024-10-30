
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()

void sol() {
  int n;
  cin >> n;
  vll a(n);
  for (auto &i : a) {
    cin >> i;
  }
  if (n == 1) {
    cout << 1 << "\n";
    return;
  }
  ll diff = 0;
  if (n % 2) {
    diff = 1e18;
    for (int i = 0; i < n; i += 2) {
      ll ans = 0;
      for (int j = 1; j < n; j += 2) {
        if (j != i + 1) {
          ans = max(ans, a[j] - a[j - 1]);
        } else {
          j--;
        }
      }
      diff = min(diff, ans);
    }
  } else {
    for (int i = 1; i < n; i += 2) {
      diff = max(diff, a[i] - a[i - 1]);
    }
  }
  cout << diff << "\n";
}

int main(int argc, char *argv[]) {

  // ios::sync_with stdio(false);
  // cin.tie(nullptr);
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
