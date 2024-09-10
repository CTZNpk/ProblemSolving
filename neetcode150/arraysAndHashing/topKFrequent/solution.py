# def topKFrequent(nums, k):
#     count = [[0, 0] for x in range(k)]
#     curCount = 1
#
#     nums.sort()
#
#     def sortCount(count, k):
#         for i in range(1, k):
#             if count[i][0] < count[i-1][0]:
#                 count[i][0], count[i][1], count[i-1][0], count[i -
#                                                                1][1] = count[i-1][0], count[i-1][1], count[i][0], count[i][1]
#             else:
#                 return
#     count[0][0] = 1
#     count[0][1] = nums[0]
#     mark = True
#     for i in range(1, len(nums)):
#         if curCount > count[0][0]:
#             mark = True
#         if nums[i] == nums[i-1]:
#             curCount += 1
#         else:
#             if mark:
#                 count[0][0] = curCount
#                 count[0][1] = nums[i-1]
#                 sortCount(count, k)
#             curCount = 1
#             mark = False
#     if curCount > count[0][0]:
#         count[0][0] = curCount
#         count[0][1] = nums[len(nums)-1]
#
#     ans = [x[1] for x in count]
#     return ans
#
#
# print(topKFrequent([2,1], 2))

class Solution:
    def topKFrequent(nums, k):
        n = len(nums)
        dic = {}
        for i in nums:
            if i not in dic:
                dic[i] = 0
            dic[i] += 1
        freqCount = [[] for _ in range(len(nums))]

        for key, v in dic.items():
            freqCount[n-v].append(key)
        ans = []
        for freq in freqCount:
            for elem in freq:
                ans.append(elem)
            if len(ans) == k:
                return ans

        return ans
