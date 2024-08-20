t = int(input())


def sol(aliceL, aliceR, bobL, bobR):
    if aliceL > bobR or aliceR < bobL:
        return 1
    i = max(aliceL, bobL)
    j = min(aliceR, bobR)
    count = 0
    if aliceL != bobL:
        count += 1
    if aliceR != bobR:
        count += 1
    return count + j - i


for _ in range(t):
    aliceL, aliceR = map(int, input().split())
    bobL, bobR = map(int, input().split())
    print(sol(aliceL, aliceR, bobL, bobR))
