from sys import stdout
t = int(input())

for _ in range(t):
    n = int(input())
    parents = [-1] * n

    def query(a, b):
        print("? " + str(a+1) + " " + str(b+1))
        stdout.flush()
        res = int(input())
        res -= 1
        return res

    def sol():

        for i in range(1, n):
            last = 0
            while True:
                x = query(i, last)
                if x == i:
                    break
                last = x
            parents[i] = last + 1

        print("!", end=" ")
        for i in range(1, n):
            print(str(i + 1) + " " + str(parents[i]), end=" ")

    sol()
