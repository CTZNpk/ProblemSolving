#include <iostream>
#include <stack>
#include <vector>

using namespace std;
class Solution {
public:
  static vector<int> dailyTemperatures(vector<int> &temperatures) {
    int n = temperatures.size();
    vector<int> answer(n);
    stack<int> st;
    st.push(n - 1);
    answer[n - 1] = 0;
    for (int i = n - 2; i >= 0; i--) {
      while (!st.empty() && temperatures[i] >= temperatures[st.top()]) {
        st.pop();
      }
      if (st.empty()) {
        answer[i] = 0;
      } else {
        answer[i] = st.top() - i;
      }
      st.push(i);
    }
    return answer;
  }
};

int main(int argc, char *argv[]) {
  vector<int> temps = {73, 74, 75, 71, 69, 72, 76, 73};
  vector<int> ans = Solution::dailyTemperatures(temps);
  for (auto i : ans) {
    cout << i << endl;
  }

  return 0;
}
