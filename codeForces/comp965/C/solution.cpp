
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define all(v) v.begin(), v.end()

void sol() {
  ll n, k;
  cin >> n >> k;
  vector<pair<ll, int>> p(n);
  vll a(n);
  vi b(n);
  for (auto &i : a) {
    cin >> i;
  }
  for (auto &i : b) {
    cin >> i;
  }
  for (int i = 0; i < n; i++) {
    p[i].first = a[i];
    p[i].second = b[i];
  }
  sort(all(p));
  for(int i = n -1; i >= 0 ; i--){

  }
}
int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
