#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define all(v) v.begin(), v.end()
#define pii pair<int, int>

void sol() {
  int n, m;
  cin >> n >> m;
  vector<vi> Xboard1(n, vi(m, 0));
  vector<vi> Yboard1(m, vi(n, 0));
  map<int, int> row;
  map<int, int> col;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> Xboard1[i][j];
      Yboard1[j][i] = Xboard1[i][j];
      row[Xboard1[i][j]] = i;
      col[Yboard1[j][i]] = j;
    }
  }
  vector<vi> Xboard2(n, vi(m, 0));
  vector<vi> Yboard2(m, vi(n, 0));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> Xboard2[i][j];
      Yboard2[j][i] = Xboard2[i][j];
    }
  }

  if (m != 1)
    for (int i = 0; i < n; i++) {
      sort(all(Xboard2[i]));
      int k = row[Xboard2[i][0]];
      sort(all(Xboard1[k]));
      for (int j = 0; j < m; j++) {
        if (Xboard1[k][j] != Xboard2[i][j]) {
          cout << "NO\n";
          return;
        }
      }
    }

  if (n != 1)
    for (int i = 0; i < m; i++) {
      sort(all(Yboard2[i]));
      int k = col[Yboard2[i][0]];
      sort(all(Yboard1[k]));
      for (int j = 0; j < n; j++) {
        if (Yboard1[k][j] != Yboard2[i][j]) {
          cout << "NO\n";
          return;
        }
      }
    }
  cout << "YES\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;
  while (tt--) {
    sol();
  }

  return 0;
}
