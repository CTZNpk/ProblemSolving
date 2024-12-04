def solve(p):
    n = len(p) - 1
    
    dp = [
        [float('inf') for _ in range(n)] 
        for _ in range(n)
    ]

    for i in range(n):
        dp[i][i] = 0

    for l in range(2, n + 1):
        for i in range(n - l + 1):
            j = i + l - 1
            
            for k in range(i, j):
                curr_out = p[i]
                next_ws = p[k + 1] * p[j + 1]

                c = dp[i][k] + dp[k + 1][j] + curr_out * next_ws

                if c < dp[i][j]:
                    dp[i][j] = c

    return dp[0][n - 1]

t = int(input())
for _  in range(t):
    input()
    line = input()
    p = list(map(int, line.split()))
    print(solve(p))

# print(solve([10, 20, 30, 40, 50]))

"""
2
4
10 20 30 40 50
3
5 10 3 12
"""