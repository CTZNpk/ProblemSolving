#include <bits/stdc++.h>

#define ll long long
#define vll vector<ll>

using namespace std;

int main(int argc, char *argv[]) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  ll n;
  cin >> n;

  vll x(n);
  vll p(n);
  for (auto &i : x) {
    cin >> i;
  }
  for (auto &i : p) {
    cin >> i;
  }

  vll s(n + 1);
  for (int i = 0; i < n; i++) {
    s[i + 1] = s[i] + p[i];
  }
  int q;
  cin >> q;

  while (q--) {
    int L, R;
    cin >> L >> R;
    R++;

    int l = lower_bound(x.begin(), x.end(), L) - x.begin();
    int r = lower_bound(x.begin(), x.end(), R) - x.begin();
    cout << s[r] - s[l] << "\n";
  }

  return 0;
}
