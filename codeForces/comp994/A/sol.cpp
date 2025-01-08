#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()
#define pii pair<int, int>

void sol() {
  int n;
  cin >> n;
  vi a(n);
  for (auto &i : a) {
    cin >> i;
  }

  int ans = 0;
  int i = 0;
  while (i < n) {
    if (a[i] != 0) {
      ans++;
      while (i < n && a[i] != 0) {
        i++;
      }
    }
    i++;
  }
  cout << min(ans, 2) << "\n";
}

int main(int argc, char *argv[]) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
