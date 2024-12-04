#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()

void sol() {
  int n, k;
  cin >> n >> k;
  vi a(n);
  for (auto &i : a) {
    cin >> i;
  }
  sort(all(a));
  int i = n - 1;
  int cnt = 0;
  while (i >= 0) {
    cnt += a[i];
    if (cnt > k) {
      cnt -= a[i];
      break;
    }
    i--;
  }
  cout << k - cnt << "\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
