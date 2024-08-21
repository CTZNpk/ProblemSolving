t = int(input())

for _ in range(t):
    n = int(input())

    a = list(map(int, input().split()))

    def sol():
        hashMap = {}
        highest = 0
        for i in a:
            if i not in hashMap:
                hashMap[i] = 0
            hashMap[i] += 1
            val = hashMap[i]
            if val > highest:
                highest = val
        return n - highest
    print(sol())
