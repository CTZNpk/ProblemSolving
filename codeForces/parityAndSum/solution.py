n = int(input())

for _ in range(n):
    k = int(input())
    nums = list(map(int, input().split()))

    def sol(k, nums):
        nums.sort()
        evenCount = 0
        oddCount = 0
        largestEven = 0
        largestOdd = 0
        largestOddIndex = -1
        for i in range(k-1, -1, -1):
            if nums[i] % 2 == 0:
                evenCount += 1
                if largestEven == 0:
                    largestEven = nums[i]
                if largestOdd != 0:
                    largestOdd += nums[i]
            else:
                oddCount += 1
                if largestOdd == 0:
                    largestOdd = nums[i]
                    largestOddIndex = i
        if evenCount == k or oddCount == k:
            return 0
        for i in range(largestOddIndex+1, k):
            if nums[i] % 2 == 0:
                if nums[i] > largestOdd:
                    return evenCount + 1
                largestOdd += nums[i]
        return evenCount

    print(sol(k, nums))
