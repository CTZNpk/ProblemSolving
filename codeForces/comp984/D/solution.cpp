
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()

void sol() {

  int n, m;
  cin >> n >> m;
  vector<string> a;
  for (int i = 0; i < n; i++) {
    string temp;
    cin >> temp;
    a.push_back(temp);
  }

  int cnt = 0;

  vector<vi> want(n, vi(m, 0));

  int li = n - 1, si = 0, sj = 0, lj = m - 1;

  vi need = {1, 5, 4, 3};
  while (si <= li) {
    int curr = 0;
    int j = si;
    for (int i = sj; i <= lj; i++) {
      if (a[j][i] - '0' == need[curr]) {
        curr++;
      } else {
        curr = 0;
      }
      if (a[j][i] - '0' == 1) {
        curr = 1;
      }
      if (curr == 4) {
        cnt++;
        curr = 0;
      }
    }
    j = lj;
    for (int i = si + 1; i <= li; i++) {
      if (a[i][j] - '0' == need[curr]) {
        curr++;
      } else {
        curr = 0;
      }
      if (a[i][j] - '0' == 1) {
        curr = 1;
      }
      if (curr == 4) {
        cnt++;
        curr = 0;
      }
    }
    j = li;
    for (int i = lj - 1; i >= sj; i--) {
      if (a[j][i] - '0' == need[curr]) {
        curr++;
      } else {
        curr = 0;
      }
      if (a[j][i] - '0' == 1) {
        curr = 1;
      }
      if (curr == 4) {
        cnt++;
        curr = 0;
      }
    }
    j = sj;
    for (int i = li - 1; i >= si + 1; i--) {
      if (a[i][j] - '0' == need[curr]) {
        curr++;
      } else {
        curr = 0;
      }
      if (a[i][j] - '0' == 1) {
        curr = 1;
      }
      if (curr == 4) {
        cnt++;
        curr = 0;
      }
    }

    int n = 3;
    j = si;
    for (int i = sj; i <= lj; i++) {
      if (a[j][i] - '0' == need[curr]) {
        curr++;
      } else {
        break;
      }
      if (curr == 4) {
        cnt++;
        curr = 0;
      }
      n--;
      if (n == 0) {
        break;
      } else if (i == lj) {
        if (a[si + 1][lj] - '0' == need[curr]) {
          curr++;
        }
        if (curr == 4) {
          cnt++;
          curr = 0;
        }
        break;
      }
    }

    si++;
    li--;
    sj++;
    lj--;
  }
  cout << cnt << "\n";
}

int main(int argc, char *argv[]) {
  int tt;
  cin >> tt;

  while (tt--) {
    sol();
  }

  return 0;
}
