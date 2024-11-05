
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define all(v) v.begin(), v.end()
#define vll vector<ll>

void sol() {
  int n;
  cin >> n;
  vll a(n);
  for (auto &i : a) {
    cin >> i;
  }

  sort(all(a));

  int cnt = n;
  int r = 2;
  for (int i = 0; i + 2 <= n; i++) {
    while (r < i + 2 || (r < n && a[i] + a[i + 1] > a[r])) {
      r++;
    }
    cnt = min(cnt, n - (r - i));
  }

  cout << cnt << "\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
