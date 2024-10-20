
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()
#define pb push_back

void sol() {
  int n;
  cin >> n;

  ll zero = 0;
  ll r = 0;
  string ans = "";
  for (int i = 0; i < n; i++) {
    if (i == 1) {
      ans += "1";
    } else {
      ans += "0";
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
