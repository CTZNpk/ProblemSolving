
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int, int>

void sol() {
  int n;
  cin >> n;
  multiset<pii> ms;
  for (int i = 0; i < n; i++) {
    int in;
    cin >> in;
    ms.insert({in, i});
  }

  int currIndx = 0;
  while (!ms.empty()) {
    auto [value, index] = *ms.begin();
    ms.extract(*ms.begin());
    if (index == n || index >= currIndx) {
      cout << value << " ";
      currIndx = index;
    } else {
      ms.insert({value + 1, n});
    }
  }
  cout << "\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
