
#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define vll vector<ll>
#define all(v) v.begin(), v.end()

void sol() {

  int n, m, q;
  cin >> n >> m >> q;
  vi a(n);
  vi b(m);
  for (auto &i : a) {
    cin >> i;
  }
  for (auto &i : b) {
    cin >> i;
  }

  map<int, int> c;
  int j = 0;
  if (a[0] != b[0]) {
    cout << "TIDAK\n";
    return;
  }
  for (int i = 0; i < m; i++) {
    if (j == n - 1) {
      break;
    }
    if (b[i] != a[j]) {
      if (b[i] == a[j + 1]) {
        j++;
      }
    }
    c[a[j]]++;
    if (c[b[i]] == 0) {
      cout << "TIDAK\n";
      return;
    }
  }
  cout << "YA\n";
}

int main(int argc, char *argv[]) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }
  return 0;
}
