
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()

void sol() {
  int n;
  cin >> n;
  set<ll> a;
  map<ll, pair<int, int>> cnt;
  for (int i = 0; i < n; i++) {
    ll k;
    cin >> k;
    a.insert(k);
    if (cnt.find(k) == cnt.end()) {
      cnt[k].first = i;
    }
    cnt[k].second++;
  }
  int count = 2000;
  int prevSum = 0;
  for (auto i = a.rbegin(); i != a.rend(); i++) {
    pair<int, int> curr = cnt[*i];
    count = min(count, curr.first + prevSum);
    prevSum += curr.second;
  }
  cout << count << "\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
