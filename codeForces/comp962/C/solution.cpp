
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()

void sol() {
  int n, q;
  cin >> n >> q;
  string a, b;
  cin >> a;
  cin >> b;
  vector<vi> comm1(n + 1, vi(26, 0));
  vector<vi> comm2(n + 1, vi(26, 0));

  for (int i = 1; i < n + 1; i++) {
    for (int j = 0; j < 26; j++) {
      comm1[i][j] = comm1[i - 1][j] + ((a[i - 1] - 'a') == j);
      comm2[i][j] = comm2[i - 1][j] + ((b[i - 1] - 'a') == j);
    }
  }

  // for (int i = 0; i < n + 1; i++) {
  //   for (int j = 0; j < 26; j++) {
  //     cout << comm2[i][j] << " ";
  //   }
  //   cout << "\n";
  // }

  while (q--) {
    int l, r;
    cin >> l >> r;
    l--;
    int mn = INT_MAX;
    int curr1 = 0;
    int curr2 = 0;
    for (int i = 0; i < 26; i++) {
      int c1 = comm1[r][i] - comm1[l][i];
      int c2 = comm2[r][i] - comm2[l][i];
      curr1 += max(c1 - c2, 0);
      curr2 += max(c2 - c1, 0);
    }
    mn = min(curr1, curr2);
    cout << mn << "\n";
  }
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
