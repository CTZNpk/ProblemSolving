t = int(input())

for _ in range(t):
    n = int(input())

    s = input()

    def sol(s, n):
        distCount = 0
        leftCount = 1

        for i in range(1, n):
            if i % 2:
                if s[i] == '(':
                    leftCount += 1
                    distCount += 2
                else:
                    leftCount -= 1
                    distCount += 1
            else:
                if leftCount != 0:
                    distCount += 1
                    leftCount -= 1
                else:
                    leftCount += 1
        return distCount
    print(sol(s, n))
