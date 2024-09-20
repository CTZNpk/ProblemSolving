import math
t = int(input())

for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))

    while True:
        flag = True
        for i in range(n-2, -1, -1):
            if a[i+1] < a[i]:
                flag = False
                diff = math.ceil((a[i] - a[i+1])/2)
                a[i] -= diff
                a[i+1] += diff
        if flag:
            break
    print(max(a) - min(a))
