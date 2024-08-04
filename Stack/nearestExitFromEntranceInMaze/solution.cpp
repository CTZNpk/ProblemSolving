#include <iostream>
#include <queue>
#include <utility>
#include <vector>

using namespace std;

class Solution {

  static void push(int x, int y, int lvl, queue<pair<pair<int, int>, int>> &q,
                   vector<vector<char>> &c) {
    if (x >= 0 && x < c.size() && y >= 0 && y < c[0].size() && c[x][y] == '.') {
      q.push({{x, y}, lvl + 1});
      c[x][y] = '0';
    }
  }

public:
  static int nearestExit(vector<vector<char>> &maze, vector<int> &entrance) {
    int rows = maze.size();
    int columns = maze[0].size();

    queue<pair<pair<int, int>, int>> q;

    push(entrance[0], entrance[1], -1, q, maze);

    while (!q.empty()) {
      pair<pair<int, int>, int> pos = q.front();
      q.pop();

      if (pos.second != 0 && (pos.first.first == 0 || pos.first.second == 0 ||
                              pos.first.first == maze.size() - 1 ||
                              pos.first.second == maze[0].size() - 1))
        return pos.second;

      else {
        push(pos.first.first - 1, pos.first.second, pos.second, q, maze);
        push(pos.first.first, pos.first.second - 1, pos.second, q, maze);
        push(pos.first.first + 1, pos.first.second, pos.second, q, maze);
        push(pos.first.first, pos.first.second + 1, pos.second, q, maze);
      }
    }

    return -1;
  }
};

int main(int argc, char *argv[]) {

  vector<vector<char>> maze = {
      {'+', '+', '.', '+'}, {'.', '.', '.', '+'}, {'+', '+', '+', '.'}};

  vector<int> entrance = {1, 2};

  cout << Solution::nearestExit(maze, entrance);

  return 0;
}
