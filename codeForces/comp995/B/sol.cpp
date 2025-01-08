
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define all(v) v.begin(), v.end()
#define vi vector<int>
#define pii pair<int, int>

void sol() {
  ll n, a, b, c;
  cin >> n >> a >> b >> c;
  ll div = a + b + c;
  ll cnfrm = n / div;
  ll curr = cnfrm * div;
  cnfrm *= 3;
  if (curr >= n) {

    cout << cnfrm << "\n";
    return;
  }

  curr += a;
  if (curr >= n) {
    cout << cnfrm + 1 << "\n";
    return;
  }
  curr += b;
  if (curr >= n) {
    cout << cnfrm + 2 << "\n";
    return;
  }

  cout << cnfrm + 3 << "\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
