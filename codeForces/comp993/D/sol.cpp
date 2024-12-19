#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define all(v) v.begin(), v.end()
#define pii pair<int, int>

void sol() {
  int n;
  cin >> n;
  vi a(n);
  vi order;
  set<int> done;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (!done.count(a[i])) {
      order.push_back(a[i]);
    }
    done.insert(a[i]);
  }

  for (int i = 1; i <= n; i++) {
    if (!done.count(i)) {
      order.push_back(i);
    }
  }
  for (auto &i : order) {
    cout << i << " ";
  }
  cout << "\n";
}

int main() {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }
}
