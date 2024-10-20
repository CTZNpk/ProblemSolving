
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define all(v) v.begin(), v.end()

void sol() {
  int n;
  cin >> n;
  vi p(n);
  for (auto &i : p) {
    cin >> i;
  }
  vi q(n);
  q[0] = p.back();
  for (int i = 1; i < n; i++) {
    q[i] = p[i - 1];
  }
  for (auto &i : q) {
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
