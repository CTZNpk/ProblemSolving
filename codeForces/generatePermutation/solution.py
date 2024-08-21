t = int(input())

for _ in range(t):
    n = int(input())

    def sol():
        if n % 2 == 0:
            print(-1)
        else:
            print(1, end=" ")
            for i in range(1, n):
                if i % 2 == 0:
                    print(i, end=" ")
                else:
                    print(i + 2, end=" ")
            print(" ")
    sol()
