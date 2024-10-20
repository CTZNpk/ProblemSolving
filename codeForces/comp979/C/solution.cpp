
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()
#define pb push_back

void sol() {
  int n;
  cin >> n;
  string a;
  cin >> a;
  bool f = false;
  for (int i = 0; i < n; i++) {
    if (i == 0 || i == n - 1) {
      f = a[i] == '1';
    } else {
      if (a[i] == '1' && a[i - 1] == '1') {
        f = true;
      }
    }
    if (f) {
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
