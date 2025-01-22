#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()
#define pii pair<int, int>

void sol() {
  ll n, l, r;
  cin >> n >> l >> r;

  vll a(n);
  l--, r--;

  vll range;
  vll bef;
  vll aft;
  int j = 0;
  for (auto &i : a) {
    cin >> i;
    if (j < l) {
      bef.push_back(i);
    }
    if (j > r) {
      aft.push_back(i);
    }
    if (j >= l && j <= r)
      range.push_back(i);
    j++;
  }
  ll ans = 0;
  sort(all(range));
  sort(all(bef));
  sort(all(aft));

  for (int i = 0; i < range.size(); i++) {
    ans += range[i];
  }

  ll ans1 = ans;
  ll ans2 = ans;
  for (int i = 0; i < bef.size(); i++) {
    if (i >= range.size() || bef[i] > range[range.size() - i - 1]) {
      break;
    }
    ans1 -= range[range.size() - i - 1];
    ans1 += bef[i];
  }

  for (int i = 0; i < aft.size(); i++) {
    if (i >= range.size() || aft[i] > range[range.size() - i - 1]) {
      break;
    }
    ans2 -= range[range.size() - i - 1];
    ans2 += aft[i];
  }
  cout << min(ans1, ans2) << "\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
