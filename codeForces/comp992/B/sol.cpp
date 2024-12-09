#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define all(v) v.begin(), v.end()
#define pii pair<int, int>
#define vi vector<int>
#define pb push_back

set<int> ch;
map<int, int> mp;

void sol() {
  int k;
  cin >> k;
  if (k == 1) {
    cout << 1 << '\n';
    return;
  } else if (k <= 4) {
    cout << 2 << "\n";
    return;
  }
  int n = *(ch.lower_bound(k));

  cout << mp[n] << "\n";
}

int main(int argc, char *argv[]) {
  int n = 10;
  int cnt = 3;
  while (n <= 1e6) {
    ch.insert(n);
    mp[n] = cnt;
    n *= 2;
    n += 2;
    cnt++;
  }
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
