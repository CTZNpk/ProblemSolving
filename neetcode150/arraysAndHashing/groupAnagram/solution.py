class Solution:
    def groupAnagrams(self, strs):
        hashMap = {}
        for i in strs:
            k = sorted(i)
            k = str(k)
            if k not in hashMap:
                hashMap[k] = [i]
            else:
                hashMap[k].append(i)
        return hashMap.values()
