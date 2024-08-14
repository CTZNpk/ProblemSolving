n = int(input())

strings = []
maxLength = 0
for _ in range(n):
    s = input()

    if len(s) > maxLength:
        maxLength = len(s)
    strings.append(s)

for i in range(maxLength):
    answer = ""
    countStar = 0
    for j in range(n-1, -1, -1):
        if i >= len(strings[j]):
            countStar += 1
        else:
            while countStar != 0:
                answer += '*'
                countStar -= 1
            answer += strings[j][i]
    print(answer)
