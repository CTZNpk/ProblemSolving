t = int(input())


def sol(n, m, k, w, h):
    h.sort()
    if k > m or k > n:
        return 0

    numbers = []

    curN = 1
    curM = 1
    for i in range(n):
        if curN >= k:
            curN = k

        for t in range(m):
            if curM == 0:
                curM = 1
            if curM >= k:
                curM = k

            numbers.append(curN * curM)
            if t < m - k:
                curM += 1
            else:
                curM -= 1
        if i < n - k:
            curN += 1
        else:
            curN -= 1

    numbers.sort()
    curNum = len(numbers) - 1
    sum = 0
    for i in range(w-1, -1, -1):
        sum += h[i] * numbers[curNum]
        curNum -= 1
        if curNum < 0:
            return sum
    return sum


for _ in range(t):
    n, m, k = map(int, input().split())
    w = int(input())
    h = list(map(int, input().split()))
    print(sol(n, m, k, w, h))
