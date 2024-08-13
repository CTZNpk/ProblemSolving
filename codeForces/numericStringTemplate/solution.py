t = int(input())


def sol(a, n, s):
    hashMap = {}
    numHashMap = {}
    if n != len(s):
        return False

    for i in range(n):
        if a[i] not in numHashMap:
            numHashMap[a[i]] = s[i]
        else:
            if numHashMap[a[i]] != s[i]:
                return False

        if s[i] not in hashMap:
            hashMap[s[i]] = a[i]
        else:
            if hashMap[s[i]] != a[i]:
                return False
    return True


for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    m = int(input())

    for _ in range(m):
        s = input()
        if (sol(a, n, s)):
            print("YES")
        else:
            print("NO")
