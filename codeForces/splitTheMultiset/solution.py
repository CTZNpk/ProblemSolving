import math
t = int(input())

for _ in range(t):
    n, k = map(int, input().split())

    def sol(n, k):
        if n == 1:
            return 0
        else:
            n -= 1
            return math.ceil(n/(k-1))
    print(sol(n, k))
