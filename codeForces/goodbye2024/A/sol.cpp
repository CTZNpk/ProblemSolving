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
  vi a(n);
  for (auto &i : a) {
    cin >> i;
  }
  for (int i = 0; i < n; i++) {
    int u = a[i];
    for (int j = i + 1; j < n; j++) {
      int w = a[j];
      if (u >= w) {
        if (2 * w > u) {
          cout << "YES\n";
          return;
        } else {
          break;
        }
      } else {
        if (2 * u > w) {
          cout << "YES\n";
          return;
        } else {
          break;
        }
      }
    }
  }
  cout << "NO\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
