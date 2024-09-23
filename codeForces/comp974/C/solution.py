import math
t = int(input())

for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))

    def sol(n, a):
        if n == 1 or n == 2:
            print(-1)
            return
        a.sort()
        s = sum(a)
        x = (a[n//2]*2*n - s) + 1
        if x < 0:
            print(0)
        else:
            print(x)

    sol(n, a)
