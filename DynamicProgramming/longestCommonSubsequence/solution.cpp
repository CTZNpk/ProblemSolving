#include <algorithm>
#include <iostream>

using namespace std;
class Solution {
public:
  static int longestCommonSubsequence(string text1, string text2) {
    int n = text1.length() + 1;
    int m = text2.length() + 1;
    int **a = new int *[n];
    for (int i = 0; i < n; i++) {
      a[i] = new int[m];
      for (int j = 0; j < m; j++) {
        if (i == 0 || j == 0) {
          a[i][j] = 0;
        } else {
          if (text1[i - 1] == text2[j - 1]) {
            a[i][j] = a[i - 1][j - 1] + 1;
          } else {
            a[i][j] = max(a[i - 1][j], a[i][j - 1]);
          }
        }
      }
    }
    return a[n - 1][m - 1];
  }
};

int main(int argc, char *argv[]) {
  string s1 = "abcde";
  string s2 = "ace";

  cout << Solution::longestCommonSubsequence(s1, s2);

  return 0;
}
