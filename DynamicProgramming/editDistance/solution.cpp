#include <algorithm>
#include <iostream>

using namespace std;

class Solution {
public:
  static int minDistance(string word1, string word2) {
    int n = word1.length();
    int m = word2.length();

    int **dynamicArray = new int *[n + 1];
    for (int i = 0; i <= n; i++) {
      dynamicArray[i] = new int[m + 1];
    }
    for (int i = 0; i <= n; i++) {
      for (int j = 0; j <= m; j++) {
        if (j == 0) {
          dynamicArray[i][j] = i;
        } else if (i == 0) {
          dynamicArray[i][j] = j;
        } else {
          if (word1[i - 1] == word2[j - 1]) {
            dynamicArray[i][j] = dynamicArray[i - 1][j - 1];
          } else {
            int min1 = min(dynamicArray[i][j - 1], dynamicArray[i - 1][j]);
            int min2 = min(min1, dynamicArray[i - 1][j - 1]);
            dynamicArray[i][j] = min2 + 1;
          }
        }
      }
    }
    return dynamicArray[n][m];
  }
};

int main(int argc, char *argv[]) {
  string word1 = "intention";
  string word2 = "execution";

  cout << Solution::minDistance(word1, word2);

  return 0;
}
