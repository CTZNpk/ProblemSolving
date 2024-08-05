t = int(input())

for _ in range(t):
    n, k = map(int, input().split())
    nums = list(map(int, input().split()))

    def sol(n, k, nums):
        if n <= k:
            nums.sort()
            return nums[(n - 1)//2]
        maxi = 0
        for i in range(0, n-k + 1):
            newArray = [*nums[0:i], *nums[i+k:n]]
            maxi = max(maxi, sol(len(newArray), k, newArray))
        return maxi
    print(sol(n, k, nums))
