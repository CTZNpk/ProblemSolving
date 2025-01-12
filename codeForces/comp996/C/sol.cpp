#include <bits/stdc++.h>
#include <pthread.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()
#define pii pair<int, int>

void sol() {
  int n, m;
  cin >> n >> m;
  string moves;
  cin >> moves;
  vector<vll> alts(n, vll(m, 0));
  vll sumR;
  for (auto &i : alts) {
    ll sum = 0;
    for (auto &j : i) {
      cin >> j;
      sum += j;
    }
    sumR.push_back(sum);
  }
  vll sumC;

  for (int i = 0; i < m; i++) {
    int sum = 0;
    for (int j = 0; j < n; j++) {
      sum += alts[j][i];
    }
    sumC.push_back(sum);
  }

  int currI = 0, currJ = 0;
  for (int i = 0; i < moves.size(); i++) {
    if (moves[i] == 'D') {
      alts[currI][currJ] = -sumR[currI];
      sumC[currJ] += -sumR[currI];
      currI++;
    } else {
      alts[currI][currJ] = -sumC[currJ];
      sumR[currI] += -sumC[currJ];
      currJ++;
    }
  }

  alts[currI][currJ] = -sumR[currI];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cout << alts[i][j] << " ";
    }
    cout << "\n";
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
