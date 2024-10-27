
#include <bits/stdc++.h>
#include <utility>

using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()

void sol() {
  int n;
  cin >> n;
  vi a(n);
  for (auto &i : a) {
    cin >> i;
    i--;
  }

  int cnt = 0;
  vi b = vi(a);
  for (int i = 0; i < n; i++) {
    while (b[i] != i) {
      swap(b[i], b[b[i]]);
      cnt++;
    }
  }
  int cnt2 = 0;
  for (int i = 0; i < n; i++) {
    while (a[a[i]] != i) {
      swap(a[i], a[a[i]]);
      cnt2++;
    }
  }
  cout << max(min(cnt, cnt2) - 1, 0) << "\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
