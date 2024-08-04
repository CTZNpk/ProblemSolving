t = int(input())

for _ in range(t):
    n = int(input())
    hList = list(map(int, input().split()))

    def sol(n, hList):
        largestNow = hList[n-1]
        for i in range(n-2, -1, -1):
            if hList[i] > largestNow:
                largestNow = hList[i]
            else:
                largestNow += 1
        return largestNow
    print(sol(n, hList))
