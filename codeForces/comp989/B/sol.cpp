
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()

void sol() {
  int n, m, k;
  cin >> n >> m >> k;
  string s;
  cin >> s;

  int st = 0;
  int cnt = 0;
  while (st < n) {
    int zeros = 0;
    bool f = false;
    while (st < n && s[st] == '0') {
      zeros++;
      if (zeros == m) {
        f = true;
        break;
      }
      st++;
    }
    if (f) {
      st += k;
      cnt++;
    } else {
      st++;
    }
  }
  cout << cnt << "\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
