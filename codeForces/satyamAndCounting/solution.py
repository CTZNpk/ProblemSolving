import math
t = int(input())

for _ in range(t):
    n = int(input())
    p0 = {}
    p1 = {}
    maxiX = 0
    for _ in range(n):
        x1, x2 = map(int, input().split())
        if x2 == 0:
            p0[x1] = True
        else:
            p1[x1] = True

    def sol(n, p0, p1):
        val0 = p0.keys()
        val1 = p1.keys()
        count = 0
        for i in val0:
            if i in p1:
                count += n - 2
            if i-1 in p1 and i+1 in p1:
                count += 1
        for i in val1:
            if i-1 in p0 and i+1 in p0:
                count += 1

        print(count)
    sol(n, p0, p1)
