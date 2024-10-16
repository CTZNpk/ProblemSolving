#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()

void sol() {
  string s, t;
  cin >> s >> t;
  int n1 = s.length();
  int n2 = t.length();
  int mx = 0;
  int i = 0;
  while (i < n1 && i < n2) {
    if (s[i] == t[i]) {
      mx++;
    } else {
      break;
    }
    i++;
  }
  int count = 0;
  if (mx != 0) {
    count += mx + 1;
  }
  n1 -= mx;
  n2 -= mx;
  count += n1;

  count += n2;
  cout << count << "\n";
}

int main(int argc, char *argv[]) {
  // ios::sync_with_stdio(false);
  // cin.tie(nullptr);
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
