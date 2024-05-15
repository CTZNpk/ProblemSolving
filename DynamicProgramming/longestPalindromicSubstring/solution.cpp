#include <iostream>

using namespace std;

class Solution {
public:
  static string longestPalindrome(string s) {
    int n = s.length();
    if (n == 0) {
      return "";
    }
    int maxLength = 0;
    int startingIndex = 0;
    for (int i = 0; i < n; i++) {
      int j = i - 1, k = i + 1, currentLength = 1;
      while (k < n && s[i] == s[k]) {
        currentLength++;
        k++;
      }
      while (j >= 0 && k < n) {
        if (s[j] != s[k])
          break;
        currentLength += 2;
        j--;
        k++;
      }
      if (currentLength > maxLength) {
        startingIndex = j + 1;
        maxLength = currentLength;
      }
    }
    return s.substr(startingIndex, maxLength);
  }
};

int main(int argc, char *argv[]) {
  string s = "baaaaabad";
  cout << Solution::longestPalindrome(s);

  return 0;
}
