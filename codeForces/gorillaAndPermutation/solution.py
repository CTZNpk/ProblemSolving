t = int(input())

for _ in range(t):
    n, m, k = map(int, input().split())

    def sol(n, m, k):
        a = []
        another = []
        for i in range(n, 0, -1):
            if i <= m:
                another.append(i)
            else:
                a.append(i)
        for x in a:
            print(x, end=" ")
        for x in range(len(another)-1, -1, -1):
            print(another[x], end=" ")
        print("")
    sol(n, m, k)
