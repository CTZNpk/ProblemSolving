#include <algorithm>
#include <iostream>
#include <numeric>
#include <set>
#include <unordered_map>
#include <utility>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin >> n;

  set<pair<int, int>> edges_H, edges_G;
  int mg;
  cin >> mg;
  for (int i = 0; i < mg; i++) {
    int u, v;
    cin >> u >> v;
    edges_G.emplace(u - 1, v - 1);
    edges_G.emplace(v - 1, u - 1);
  }

  int mh;
  cin >> mh;
  unordered_map<int, int> adjMh;
  for (int i = 0; i < mh; i++) {
    int u, v;
    cin >> u >> v;
    edges_H.emplace(u - 1, v - 1);
    edges_H.emplace(v - 1, u - 1);
  }

  vector<vector<int>> A(n, vector<int>(n));
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      cin >> A[i][j];
      A[j][i] = A[i][j];
    }
  }

  vector<int> P(n);
  iota(P.begin(), P.end(), 0);

  int ans{28000000};

  do {
    int sum = 0;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < i; j++) {
        sum += A[i][j] * (edges_H.count({i, j}) != edges_G.count({P[i], P[j]}));
      }
    }
    ans = min(ans, sum);
  } while (next_permutation(P.begin(), P.end()));

  cout << ans << "\n";
  return 0;
}
