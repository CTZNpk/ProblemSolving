#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()

void sol() {
  int n;
  cin >> n;
  if (n < 5) {
    cout << -1 << "\n";
    return;
  }
  vi odd;
  vi ev;
  for (int i = 1; i <= n; i += 2) {
    if (i != 5) {
      odd.push_back(i);
    }
  }
  ev.push_back(4);
  for (int i = 2; i <= n; i += 2) {
    if (i != 4) {
      ev.push_back(i);
    }
  }
  odd.push_back(5);
  for (auto &i : odd) {
    cout << i << " ";
  }
  for (auto &i : ev) {
    cout << i << " ";
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
