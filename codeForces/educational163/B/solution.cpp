
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define all(v) v.begin(), v.end()

void sol() {
  int n;
  cin >> n;
  vi a(n);
  for (auto &i : a) {
    cin >> i;
  }

  vi b(n);
  if (a[0] / 10 <= a[0] % 10) {
    b[0] = a[0] % 10;
  } else {
    b[0] = a[0];
  }

  for (int i = 1; i < n; i++) {
    if (a[i] < 10) {
      if (a[i] < b[i - 1]) {
        cout << "NO\n";
        return;
      } else {
        b[i] = a[i];
      }
    } else {
      if (a[i] / 10 >= b[i - 1] && a[i] / 10 <= a[i] % 10) {
        b[i] = a[i] % 10;
      } else {
        if (a[i] >= b[i - 1]) {
          b[i] = a[i];
        } else {
          cout << "NO\n";
          return;
        }
      }
    }
  }

  cout << "YES\n";
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
