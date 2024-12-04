#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()

void sol() {
  int n;
  cin >> n;
  map<int, int> cnt;
  for (int i = 0; i < n; i++) {
    int k;
    cin >> k;
    cnt[k]++;
  }
  int sc = 0;
  for (auto &i : cnt) {
    while (i.second > 1) {
      i.second -= 2;
      sc++;
    }
  }
  cout << sc << "\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
