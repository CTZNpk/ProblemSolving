t = int(input())
while(t):
    t -= 1
    n, m = list(map(int,input().split(' ')))
    grid_a = []
    grid_b = []
    for i in range(n):
        grid_a.append(list(map(int, list(input()))))
    for i in range(n):
        grid_b.append(list(map(int, list(input()))))
    ac = [0] * n
    ar = [0] * m
    bc = [0] * n
    br = [0] * m
    for i in range(n):
        for j in range(m):
            ac[i] += grid_a[i][j]
            bc[i] += grid_b[i][j]
            ar[j] += grid_a[i][j]
            br[j] += grid_b[i][j]
    ok = True
    for i in range(n):
        ok &= (ac[i] % 3 == bc[i] % 3)
    for i in range(m):
        ok &= (br[i] % 3 == ar[i] % 3)
    if ok:
        print("Yes")
    else:
        print("No")
