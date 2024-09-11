t = int(input())

for _ in range(t):
    n = int(input())
    v = []
    for _ in range(n):
        s = input()
        v.append(s)

    for i in range(n-1, -1, -1):
        print(v[i].find('#') + 1, end=" ")
    print("")
