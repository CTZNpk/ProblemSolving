t = int(input())

for _ in range(t):
    n, q = map(int, input().split())
    prefSum = []
    suffSum = []
    totalSum = 0
    a = list(map(int, input().split()))
    prefSum.append(a[0])
    suffSum.append(a[-1])
    totalSum = a[0]
    for i in range(1, n):
        totalSum += a[i]
        prefSum.append(totalSum)
        suffSum.append(suffSum[i-1]+a[n-i-1])

    def sol(l, r):
        sum = 0
        lPos = l // n
        l -= lPos*n
        flag = False
        if l != 0:
            # print("IN LOOP")
            # print(lPos)
            # print(l)
            # print(n-l-1)
            if lPos < l:
                if lPos != 0:
                    sum -= suffSum[(n-lPos)-1]
                print(sum)
                if (n-lPos) != l-1:
                    sum -= prefSum[l - (n-lPos) - 1]
                print(sum)
            else:
                flag = True
        print(sum)
        # print("OUT LLOP")
        rPos = r // n
        # print(lPos)
        # print(rPos)
        if l != (rPos*n):
            diff = rPos - lPos
            sum += totalSum * diff
        r -= (rPos * n)
        for i in range(r+1):
            if flag and i < l:
                continue
            if i+rPos < n:
                sum += a[i+rPos]
            else:
                sum += a[(i+rPos)-n]
        print(sum)

    for i in range(q):
        l, r = map(int, input().split())
        sol(l-1, r-1)
