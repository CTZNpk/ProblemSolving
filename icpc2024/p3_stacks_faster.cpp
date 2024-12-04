#include <iostream>
#include <limits>
#include <vector>
#include <string>

using namespace std;

vector<string> GTS = { "S", "F", "H" };

vector<vector<int>> ALL_PERMS = {
    { 0, 1, 2 },
    { 0, 2, 1 },
    { 1, 0, 2 },
    { 1, 2, 0 },
    { 2, 0, 1 },
    { 2, 1, 0 },
};

string make_perm_str(const vector<int>& perm)
{
    string str = "";
    for (int genre : perm)
    {
        str += GTS[genre];
    }

    return str;
}

void solve(
  int S1, int F1, int H1, int S2, int F2, int H2, int S3, int F3, int H3)
{
    int TS = S1 + S2 + S3;
    int TF = F1 + F2 + F3;
    int TH = H1 + H2 + H3;

    vector<vector<int>> stacks = {
        { S1, F1, H1 },
        { S2, F2, H2 },
        { S3, F3, H3 }
    };

    int min_moves = std::numeric_limits<int>::max();
    vector<int> best_perm;

    for (const auto& perm : ALL_PERMS)
    {
        int moves = 0;
        for (int stack_idx = 0; stack_idx < 3; ++stack_idx)
        {
            int genre = perm[stack_idx];
            int genre_total = (genre == 0 ? TS : (genre == 1 ? TF : TH));
            moves += genre_total - stacks[stack_idx][genre];
        }

        string perm_str = make_perm_str(perm);
        string best_perm_str = make_perm_str(best_perm);

        if (moves < min_moves
            || (moves == min_moves && perm_str < best_perm_str))
        {
            min_moves = moves;
            best_perm = perm;
        }
    }

    string best_perm_str = make_perm_str(best_perm);

    cout << best_perm_str << " " << min_moves << '\n';
}

inline int next()
{
    int x;
    cin >> x;
    return x;
}


int main()
{
    int t = next();

    while (t--)
    {
        int S1 = next();
        int F1 = next();
        int H1 = next();
        int S2 = next();
        int F2 = next();
        int H2 = next();
        int S3 = next();
        int F3 = next();
        int H3 = next();

        // int S1 = 1
        // int F1 = 1
        // int H1 = 2;
        // int S2 = 3
        // int F2 = 5
        // int H2 = 8;
        // int S3 = 10
        // int F3 = 3
        // int H3 = 7;

        solve(S1, F1, H1, S2, F2, H2, S3, F3, H3);
    }

    return 0;
}
