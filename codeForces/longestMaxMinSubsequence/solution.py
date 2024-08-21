t = int(input())

for _ in range(t):
    n = int(input())

    a = list(map(int, input().split()))

    def findSubSequence(s, i):
        if s.find(a[i]) == -1:
            s += str(i)
        else:
            newS = s.replace(str(i), "")
            newS += a[i]
            findSubSequence(s, i+1)

    def sol():
        highestLen = 1
        hashMap = {}
        subsequences = [""]
        for i in a:
            if i not in hashMap:
                hashMap[i] = 1
                for j in range(len(subsequences)):
                    subsequences[j] += str(i)
                highestLen += 1
            else:
                current = subsequences[len(subsequences) - 1]
                current = current.replace(str(i), "")
                current += str(i)
                subsequences.append(current)
        print(highestLen)
        print(subsequences)
    sol()
