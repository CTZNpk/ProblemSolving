#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>

ll M = 998244353;

ll fact(ll n) {
  if (n == 0) {
    return 1;
  }

  return (fact(n - 1) * n) % M;
}

void sol() {
  string s;
  cin >> s;

  ll ways = 0;
  ll f = 1;
  ll c = 0;
  for (int i = 1; i < s.length(); i++) {
    ll count = 1;
    while (i < s.length()) {
      if (s[i] == s[i - 1]) {
        ways++;
        count++;
        c++;
        i++;
      } else {
        break;
      }
    }
    f = (f * count) % M;
  }
  cout << ways << " " << (f * fact(c)) % M << "\n";
}
int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
