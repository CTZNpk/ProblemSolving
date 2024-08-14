n = int(input())


hashMap = {}

distinctCount = 0

for _ in range(n):
    q = input()
    if len(q) == 1:
        print(distinctCount)
    else:
        que, x = map(int, q.split())
        if que == 1:
            if x not in hashMap or hashMap[x] == 0:
                hashMap[x] = 1
                distinctCount += 1
            else:
                hashMap[x] += 1
        else:
            hashMap[x] -= 1
            if hashMap[x] == 0:
                distinctCount -= 1
