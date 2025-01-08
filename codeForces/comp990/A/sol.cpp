#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int, int>

set<int> happy;

void sol() {
  int n;
  cin >> n;
  vi a(n);
  int curr = 0;
  int ans = 0;
  for (auto &i : a) {
    cin >> i;
    curr += i;
    if (happy.count(curr)) {
      ans++;
    }
  }
  cout << ans << "\n";
}

int main(int argc, char *argv[]) {
  int curr = 1;
  int prev = curr;
  happy.insert(curr);
  while (curr <= 100) {
    int toPush = curr * 4;
    toPush += 4;
    happy.insert(toPush + prev);
    prev += toPush;
    curr += 2;
  }

  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
