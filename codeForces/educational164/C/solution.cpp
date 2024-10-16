
#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define vll vector<ll>
#define all(v) v.begin(), v.end()
#define pb push_back

void sol() {
  string a, b;
  cin >> a >> b;
  int n = a.size();
  bool f = true;
  for (int i = 0; i < n; i++) {
    if (f) {
      if (a[i] != b[i]) {
        int k = a[i];
        int l = b[i];
        a[i] = max(k, l);
        b[i] = min(k, l);
        f = false;
      }
    } else {
      if (a[i] != b[i]) {
        int k = a[i];
        int l = b[i];
        a[i] = min(k, l);
        b[i] = max(k, l);
        f = false;
      }
    }
  }
  cout << a << "\n";
  cout << b << "\n";
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
