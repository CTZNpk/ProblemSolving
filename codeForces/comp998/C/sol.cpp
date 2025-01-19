#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define all(v) v.begin(), v.end()
#define vll vector<ll>

void sol() {
  int n, k;
  cin >> n >> k;
  vi a(n + 1, 0);
  vi vec;
  for (int i = 0; i < n; i++) {
    int l;
    cin >> l;
    a[l]++;
  }
  int pairs = 0;
  for (int i = 0; i <= n; i++) {
    while (k - i > 0 && k - i <= n && a[i] > 0 && a[k - i] > 0) {
      if (i != k - i || a[i] >= 2)
        pairs++;
      a[k - i]--;
      a[i]--;
    }
    a[i]--;
  }
  cout << pairs << "\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
