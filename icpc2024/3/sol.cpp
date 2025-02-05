#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  scanf("%d", &t);
  vector<string> permutations = {"FHS", "FSH", "HFS", "HSF", "SFH", "SHF"};
  while (t--) {
    int s1, f1, h1, s2, f2, h2, s3, f3, h3;
    scanf("%d %d %d %d %d %d %d %d %d", &s1, &f1, &h1, &s2, &f2, &h2, &s3, &f3,
          &h3);
    int min_sum = INT_MAX;
    string best_perm;

    for (auto &perm : permutations) {
      int s_stack, f_stack, h_stack;
      for (int i = 0; i < 3; ++i) {
        if (perm[i] == 'S')
          s_stack = i + 1;
        else if (perm[i] == 'F')
          f_stack = i + 1;
        else if (perm[i] == 'H')
          h_stack = i + 1;
      }

      int sum = 0;
      // Calculate sum for Science not in its stack
      if (s_stack == 1)
        sum += s2 + s3;
      else if (s_stack == 2)
        sum += s1 + s3;
      else
        sum += s1 + s2;

      // Calculate sum for Fiction not in its stack
      if (f_stack == 1)
        sum += f2 + f3;
      else if (f_stack == 2)
        sum += f1 + f3;
      else
        sum += f1 + f2;

      // Calculate sum for History not in its stack
      if (h_stack == 1)
        sum += h2 + h3;
      else if (h_stack == 2)
        sum += h1 + h3;
      else
        sum += h1 + h2;

      if (sum < min_sum) {
        min_sum = sum;
        best_perm = perm;
      } else if (sum == min_sum && perm < best_perm) {
        best_perm = perm;
      }
    }
    printf("%s %d\n", best_perm.c_str(), min_sum);
  }
  return 0;
}
