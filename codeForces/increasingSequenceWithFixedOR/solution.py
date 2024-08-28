t = (int)(input())
for _ in range(t):
    n = (int)(input())
    a = []
    for i in range(62, -1, -1):
        x = 1 << i
        if ((x & n) == x) and (x != n):
            a.append(n - x)
    a.append(n)
    print(len(a))
    for i in a:
        print(i, end=" ")
    print("")
