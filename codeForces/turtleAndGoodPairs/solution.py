t = int(input())

for _ in range(t):
    n = int(input())
    s = input()

    def sol():
        listS = [0 for x in range(26)]

        for i in s:
            listS[ord(i) - ord('a')] += 1

        ans = ""

        while True:
            count = 0
            for i in range(26):
                if listS[i] > 0:
                    count += 1
                    ans += chr(i + ord('a'))
                    listS[i] -= 1
            if count == 0:
                break
        return ans

    print(sol())
