#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define vll vector<ll>
#define vi vector<int>

void sol() {
  int n;
  cin >> n;

  vector<string> g(n);
  for (auto &i : g) {
    cin >> i;
  }

  vi posi(n, 0);

  for (int i = 0; i < n; i++) {
    int pos = 0;
    for (int j = 0; j < n; j++) {
      if (g[i][j] == '1' && j < i) {
        pos++;
      } else if (g[i][j] == '0' && j > i) {
        pos++;
      }
    }
    posi[i] = pos;
  }

  vi perm(n, 0);
  int j = 1;
  for (auto &i : posi) {
    perm[i] = j;
    j++;
  }
  for (auto &i : perm) {
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
