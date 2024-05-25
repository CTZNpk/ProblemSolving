#include <cstddef>
#include <iostream>
#include <vector>

using namespace std;

struct suffixTreeNode {
  bool isEnd = false;
  suffixTreeNode **next = new suffixTreeNode *[26]();
};

class Solution {
public:
  static vector<string> wordBreak(string s, vector<string> &wordDict) {
    // INITIALIZING SUFFIX TREEE
    suffixTreeNode *start = new suffixTreeNode;
    start->isEnd = false;
    for (string str : wordDict) {
      int n = str.length();
      suffixTreeNode *curr = start;
      for (int i = n - 1; i >= 0; i--) {
        char c = str[i];
        if (curr->next[c - 'a'] == NULL) {
          curr->next[c - 'a'] = new suffixTreeNode;
        }
        curr = curr->next[c - 'a'];
        if (i == 0) {
          curr->isEnd = true;
        }
      }
    }
    // SOLVING PROBLEM
    int n = s.length();
    vector<vector<string>> ansStrings(n, vector<string>(0));

    for (int i = n - 1; i >= 0; i--) {
      char c = s[i];
      suffixTreeNode *curr = start;
      int k = i;
      while (k >= 0 && curr->next[c - 'a'] != NULL) {
        curr = curr->next[c - 'a'];
        if (curr->isEnd) {
          if (i != n - 1) {
            int u = ansStrings[i + 1].size();
            string word = s.substr(k, i - k + 1);
            for (int p = 0; p < u; p++) {
              ansStrings[k].push_back(word + " " + ansStrings[i + 1][p]);
            }
          } else {
            ansStrings[k].push_back(s.substr(k, i - k + 1));
          }
        }
        k--;
        if (k >= 0) {
          c = s[k];
        }
      }
    }
    return ansStrings[0];
  }
};

int main(int argc, char *argv[]) {
  string s = "ab";
  vector<string> wordDict = {"a", "b"};

  vector<string> ans = Solution::wordBreak(s, wordDict);

  for (auto s : ans) {
    cout << s << endl;
  }

  return 0;
}
