
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define all(v) v.begin(), v.end()
#define pii pair<int, int>

void sol() {
  int n;
  cin >> n;
  vi a(n);
  int mx = 0;
  ll sum = 0;

  for (auto &i : a) {
    cin >> i;
    sum += i;
    mx = max(i, mx);
  }
  sum -= mx;
  if (mx == 0) {
    cout << 0 << "\n";
  } else if (sum >= mx) {

    cout << 1 << "\n";
  } else {
    cout << mx - sum << "\n";
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
