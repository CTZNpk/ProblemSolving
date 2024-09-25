#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vll vector<long long>
#define vi vector<int>

int main(int argc, char *argv[]) {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  priority_queue<int> qu;

  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int k;
    cin >> k;
    qu.push(k);
  }

  int steps = 0;
  while (true) {
    int num1 = qu.top();
    qu.pop();
    int num2 = qu.top();
    qu.pop();

    if (num2 == 0) {
      break;
    }

    steps += num2;
    qu.push(0);
    qu.push(num1 - num2);
  }
  cout << steps << "\n";

  return 0;
}
