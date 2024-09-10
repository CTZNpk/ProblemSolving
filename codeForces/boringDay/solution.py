t = int(input())

for _ in range(t):
    n, l, r = map(int, input().split())
    a = list(map(int, input().split()))

    def sol(l, r, n, a):
        curSum = 0
        rWin = 0
        for i in a:
            curSum += i
            if curSum > r:
                curSum = 0
            if curSum >= l:
                curSum = 0
                rWin += 1
        return rWin
    print(sol(l, r, n, a))
