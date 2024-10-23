

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()

void sol() {
  ll n, k;
  cin >> n >> k;
  map<ll, vll> mp;
  for (int i = 0; i < n; i++) {
    ll d;
    cin >> d;
    mp[d % k].push_back(d / k);
  }
  int rem = n % 2;
  ll ans = 0;
  for (auto &i : mp) {
    vll vec = i.second;
    int sz = vec.size();
    sort(all(vec));
    if (sz % 2) {
      if (rem == 0) {
        cout << -1 << "\n";
        return;
      }
      rem--;
      if (sz == 1)
        continue;
      vll pre(sz, 0), suff(sz, 0);
      pre[1] = vec[1] - vec[0];
      for (int i = 3; i < sz; i += 2) {
        pre[i] = pre[i - 2] + vec[i] - vec[i - 1];
      }
      suff[sz - 2] = vec[sz - 1] - vec[sz - 2];
      for (int i = sz - 4; i >= 0; i -= 2) {
        suff[i] = suff[i + 2] + vec[i + 1] - vec[i];
      }
      ll mn = INT_MAX;
      for (int i = 0; i < sz; i += 2) {
        ll sum = 0;
        if (i > 0)
          sum += pre[i - 1];
        if (i < sz - 1)
          sum += suff[i + 1];
        mn = min(mn, sum);
      }
      ans += mn;

    } else {
      for (int i = 1; i < sz; i += 2) {
        ans += vec[i] - vec[i - 1];
      }
    }
  }
  cout << ans << "\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;

  while (tt--) {
    sol();
  }
  return 0;
}
