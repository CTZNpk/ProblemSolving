
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()

void sol() {
  int n, k;
  cin >> n >> k;
  vi b(k);
  vi c(k);
  map<int, int> cnt;
  vi cost;
  for (int i = 0; i < k; i++) {
    cin >> b[i] >> c[i];
    cnt[b[i]] += c[i];
  }
  for (auto &i : cnt) {
    cost.push_back(i.second);
  }

  sort(all(cost));
  int total = 0;
  for (int i = cost.size() - 1; i >= max(0, (int)cost.size() - n); i--) {
    total += cost[i];
  }
  cout << total << "\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;

  while (tt--) {
    sol();
  }

  return 0;
}
