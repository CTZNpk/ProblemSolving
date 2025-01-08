#include <bits/stdc++.h>

using namespace std;

#define vi vector<char>

void sol() {
  int n;
  cin >> n;

  vector<vi> board(n, vi(2, 0));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 2; j++) {
      cin >> board[i][j];
    }
  }

  bool mult = false;

  auto check = [&](int i) {
    if (board[i][0] == '#' && board[i][1] == '#') {
      return true;
    }
    if (i + 1 < n) {
      int cntHash = 0;
      for (int k = 0; k < 2; k++) {
        for (int j = 0; j < 2; j++) {
          if (board[i + k][j] == '#') {
            cntHash++;
          }
        }
      }
      cout << i << " ";
      cout << cntHash << "\n";

      if (cntHash == 3) {
        return false;
      }
      int notConvX = -1;
      int notConvY = -1;
      if (cntHash == 2) {
        cout << "HERESHOULD WE BE \n";
        if (board[i][0] == '.' && board[i][1] == '.' &&
            board[i + 1][1] == '.' && board[i + 1][1] == '.') {
          mult = true;
        } else if ((board[i][0] == '#' && board[i + 1][1] == '#') ||
                   (board[i][1] == '#' && board[i + 1][0] == '#')) {
          return false;
        }
      } else if (cntHash == 1) {
        if (board[i][0] == '#') {
          notConvX = i + 1;
          notConvY = 0;
        } else if (board[i + 1][0] == '#') {
          notConvX = i + 1;
          notConvY = 1;
        } else if (board[i][1] == '#') {
          notConvX = i + 1;
          notConvY = 1;
        } else {
          notConvX = i + 1;
          notConvY = 0;
        }
      } else {
        mult = true;
      }

      for (int k = 0; k < 2; k++) {
        for (int j = 0; j < 2; j++) {
          if (i + k != notConvX && j != notConvY)
            board[i + k][j] = '#';
        }
      }
    } else {
      if ((board[i][0] == '.' && board[i][1] == '#') ||
          (board[i][0] == '#' && board[i][1] == '.')) {
        return false;
      }
    }
    return true;
  };

  for (int i = 0; i < n; i++) {
    if (!check(i)) {
      cout << "None\n";
      return;
    }
  }
  if (mult) {
    cout << "Multiple\n";
  } else {
    cout << "Unique\n";
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
