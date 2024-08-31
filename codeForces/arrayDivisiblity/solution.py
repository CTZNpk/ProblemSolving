t = int(input())

for _ in range(t):
    n = int(input())

    def sol(n):
        for i in range(1, n+1):
            print(i, end=" ")
        print("")
    sol(n)
