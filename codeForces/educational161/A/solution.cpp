#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define all(v) v.begin(), v.end()

void sol() {
  int n;
  cin >> n;

  string a, b, c;
  cin >> a;
  cin >> b;
  cin >> c;
  bool f = false;
  for (int i = 0; i < n; i++) {
    if (c[i] == a[i] || c[i] == b[i]) {
    } else {
      f = true;
      break;
    }
  }
  if (f) {
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
