#include <iostream>

using namespace std;

int dp[31][31][31];

int recurSolve(int c, int k, int l) {
  if (dp[c][k][l] != 0) {
    return dp[c][k][l];
  }
  if (c == 0) {
    dp[c][k][l] = min(k, l);
    return dp[c][k][l];
  } else if (k == 0) {
    dp[c][k][l] = min(c, l);
    return dp[c][k][l];
  } else if (l == 0) {
    dp[c][k][l] = min(c, k);
    return dp[c][k][l];
  } else {
    int max1 =
        max(recurSolve(c - 1, k - 1, l) + 1, recurSolve(c, k - 1, l - 1) + 1);
    dp[c][k][l] = max(recurSolve(c - 1, k, l - 1) + 1, max1);
    return dp[c][k][l];
  }
}

int sol(int c, int k, int l) {
  if ((c + k + l) % 2) {
    return -1;
  }
  if (c == 0) {
    return min(k, l);

  } else if (k == 0) {
    return min(c, l);
  } else if (l == 0) {
    return min(c, k);
  }
  return recurSolve(c, k, l);
}

int main(int argc, char *argv[]) {
  int n;
  cin >> n;
  while (n--) {
    int c, k, l;
    cin >> c >> k >> l;
    cout << sol(c, k, l) << endl;
  }

  return 0;
}
