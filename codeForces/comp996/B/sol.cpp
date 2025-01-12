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
  vi b(n);
  for (auto &i : a) {
    cin >> i;
  }
  for (auto &i : b) {
    cin >> i;
  }
  bool done = false;
  int margin = 1e9 + 1;
  int need = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] >= b[i]) {
      margin = min(margin, a[i] - b[i]);
    } else {
      if (done) {
        cout << "NO\n";
        return;
      } else {
        done = true;
        need = b[i] - a[i];
      }
    }
  }
  if (need <= margin) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
