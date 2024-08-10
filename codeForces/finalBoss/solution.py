import heapq
t = int(input())


def sol(heap, h):
    while True:
        minCool = heapq.heappop(heap)
        h -= minCool[2]
        if h <= 0:
            return minCool[0]
        minCool[0] += minCool[1]
        heapq.heappush(heap, minCool)


for _ in range(t):
    h, n = map(int, input().split())
    damage = list(map(int, input().split()))
    coolDown = list(map(int, input().split()))
    heap = []

    for i in range(n):
        heapq.heappush(heap, [1, coolDown[i], damage[i]])
    print(sol(heap, h))
