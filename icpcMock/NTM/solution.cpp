#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()

void sol(int k) {
  int n;
  cin >> n;
  vi a(n);
  for (auto &i : a) {
    cin >> i;
  }
  for (int i = 0; i < n - 1; i++) {
    a[i] = abs(a[i + 1] - a[i]);
  }
  for (int i = 0; i < n - 2; i++) {
    a[i] = abs(a[i + 1] - a[i]);
  }
  for (int i = 0; i < n - 2; i++) {
    if (a[i] >= k) {
      cout << 1 << " ";
    } else {
      cout << 0 << " ";
    }
  }
  cout << "\n";
}

int main(int argc, char *argv[]) {

  int tt;
  cin >> tt;
  int k;
  cin >> k;
  while (tt--) {
    sol(k);
  }
  return 0;
}
