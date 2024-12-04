#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()

void sol() {
  ll n, k;
  cin >> n >> k;
  string s;
  cin >> s;

  vi suff(n + 1, 0);
  for (int i = n - 1; i > 0; i--) {
    if (s[i] == '1') {
      suff[i] = suff[i + 1] + 1;
    } else {
      suff[i] = suff[i + 1] - 1;
    }
  }

  sort(all(suff));
  // for (auto &i : suff) {
  //   cout << i << " ";
  // }
  ll curr = 0;
  for (int i = n; i >= 0; i--) {
    if (suff[i] <= 0) {
      cout << -1 << "\n";
      return;
    }
    curr += suff[i];
    if (curr >= k) {
      cout << n - i + 2 << "\n";
      return;
    }
  }
  cout << -1 << "\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}

