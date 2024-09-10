class Solution:
    def twoSum(self, nums, target):
        n = len(nums)
        hashMap = {}
        for i in range(n):
            hashMap[nums[i]] = i
        for i in range(n):
            if target-nums[i] in hashMap:
                if hashMap[target-nums[i]] != i:
                    return [i, hashMap[target-nums[i]]]
