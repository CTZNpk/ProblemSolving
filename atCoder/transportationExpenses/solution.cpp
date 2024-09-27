#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<long long>
#define ull unsigned long long

ll calculate(vll ans, ll a) {
  ll sum = 0;
  for (auto i : ans) {
    sum += min(i, a);
  }
  return sum;
}

int main(int argc, char *argv[]) {
  ll n, m;
  cin >> n >> m;

  vll a(n);
  ll s = 0;
  ll mx = 0;
  for (auto &i : a) {
    cin >> i;
    s += i;
    if (mx < i) {
      mx = i;
    }
  }

  if (s <= m) {
    cout << "infinite";
  } else {
    ll l = 0;
    ll r = mx + 1;

    while (r >= l) {
      ll mid = (r + l) / 2;
      ll sum = calculate(a, mid);
      if (sum > m) {
        r = mid - 1;
      } else {
        l = mid + 1;
      }
    }
    cout << r;
  }

  return 0;
}
