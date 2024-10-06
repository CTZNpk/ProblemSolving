#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define vll vector<ll>
#define all(v) v.begin(), v.end()

int main(int argc, char *argv[]) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    vi a(n);
    for (auto &i : a) {
      cin >> i;
    }
    sort(all(a));
    int curr = a[0];
    for (int i = 1; i < n; i++) {
      curr += a[i];
      curr /= 2;
    }
    cout << curr << "\n";
  }

  return 0;
}
