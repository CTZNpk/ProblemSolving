#include <unordered_map>
#include <ios>
#include <iostream>
#include <string>

using namespace std;


inline int next()
{
    int x;
    cin >> x;
    return x;
}



int solve(string s)
{
    unordered_map<char, int> char_to_count;

    int a = 0;
    int b = s.size() - 1;
    int moves = 0;

    for (char ch : s)
        char_to_count[ch]++;

    int num_odd = 0;
    for (auto i : char_to_count)
    {
        if (i.second % 2 == 1)
        {
            num_odd++;

            if (num_odd > 1)
                return -1;
        }
    }

    while (true)
    {
        if (a >= b) break;
        int temp_a = a;
        int temp_b = b;

        while (s[temp_a] != s[temp_b])
            temp_b--;
        
        // assume matching on frst and last

        if (temp_a == temp_b)
        {
            swap(s[temp_b], s[temp_b + 1]);
            moves++;
            continue;
        }

        else
        {
            while (temp_b < b)
            {
                swap(s[temp_b], s[temp_b + 1]);
                moves++;
                temp_b++;
            }
        }

        a++;
        b--;
    }

    return moves;
}

// Driver's code
int main()
{
    std::ios_base::sync_with_stdio(false);

    int t = next();

    while (t--) {
        string s;
        cin >> s;
        cout << solve(s) << '\n';
    }

    // // string s = "arcacer";
    // // string s = "ppp";
    // // string s = "eggeekgbbeg";
    // string s = "letelt";
    // cout << solve(s) << endl;
    // return 0;
}


/*
4
arcacer
ppp
eggeekgbbeg
letelt
*/