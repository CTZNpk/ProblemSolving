import math
t = int(input())

for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))

    def sol():
        sum1 = 0
        sum2 = 0
        sub = 0
        add = 0
        for i in range(n):
            if a[i] > b[i]:
                sum1 += a[i]
            elif b[i] > a[i]:
                sum2 += b[i]
            else:
                if a[i] < 0:
                    sub -= a[i]
                else:
                    add += a[i]

        maxi = max(sum1, sum2)
        mini = min(sum1, sum2)

        if add + mini < maxi:
            mini += add
            add = 0
        else:
            add -= maxi - mini
            mini = maxi
        if maxi - sub < mini:
            sub -= maxi - mini
            maxi = mini
            add -= sub
        return mini + add // 2

    print(sol())
