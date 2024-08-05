t = int(input())

for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))

    def sol(a, n):
        sum = 0
        largestZero = 0

        countMap = {}
        largest = 0
        for i in range(0, n):
            num = a[i]
            sum += num
            if num not in countMap:
                countMap[num] = 0
            countMap[num] += 1
            if num > largest and countMap[num] > 1:
                largest = num
            a[i] = largest
            if a[i] == 0:
                largestZero = i

        for i in range(largestZero + 1, n):
            if i == n - 1:
                sum += a[i]
            else:
                if a[i] != a[i-1] and a[i] != a[i+1]:
                    sum += a[i]
                    sum += a[i-1] * (n - i - 1)
                    a[i] = a[i-1]
                else:
                    sum += a[i] * (n-i)

        return sum

    print(sol(a, n))
