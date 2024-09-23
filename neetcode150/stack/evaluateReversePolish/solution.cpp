#include <iostream>
#include <stack>
#include <vector>

using namespace std;
class Solution {
public:
  static int evalRPN(vector<string> &tokens) {
    stack<int> nums;
    int n = tokens.size();
    for (int i = 0; i < n; i++) {
      if (tokens[i].length() > 1 || isdigit(tokens[i][0])) {
        nums.push(stoi(tokens[i]));
      } else {
        int num1 = nums.top();
        nums.pop();
        int num2 = nums.top();
        nums.pop();
        int ans;
        if (tokens[i] == "+") {
          ans = num1 + num2;
        } else if (tokens[i] == "-") {
          ans = num2 - num1;
        } else if (tokens[i] == "*") {
          ans = num1 * num2;
        } else {
          ans = num2 / num1;
        }
        nums.push(ans);
      }
    }
    return nums.top();
  }
};

int main(int argc, char *argv[]) {
  vector<string> st = {"10", "6", "9",  "3", "+", "-11", "*",
                       "/",  "*", "17", "+", "5", "+"};
  cout << Solution::evalRPN(st);

  return 0;
}
