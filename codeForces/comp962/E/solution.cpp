
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()

void sol() {
  string s;
  cin >> s;
  int n = s.length();
  vi prefSum(n + 1, 0);
  for (int i = 1; i <= n; i++) {
    int c = s[i - 1] == '1' ? 1 : -1;
    prefSum[i] = prefSum[i - 1] + c;
  }

  map<int, ll> prefValidSum;

  ll ans = 0;
  ll mod = 1000000000 + 7;
  for (int i = 0; i <= n; i++) {
    ll currVal = prefSum[i];
    ll pSum = prefValidSum[currVal];
    ll rVals = n - i + 1;
    ans += rVals * (pSum % mod);

    prefValidSum[currVal] += i + 1;
  }
  cout << ans % mod << "\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
