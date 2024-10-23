
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()

void sol() {
  int n, k;
  cin >> n >> k;
  vector<string> board(n);
  for (auto &i : board) {
    cin >> i;
  }

  vector<string> ans;
  for (int i = 0; i < n; i += k) {
    string cur;
    for (int j = 0; j < n; j += k) {
      cur += board[i][j];
    }
    ans.push_back(cur);
  }
  for (auto &i : ans) {
    cout << i << "\n";
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
