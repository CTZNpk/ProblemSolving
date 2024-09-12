s = list(input())
t = list(input())

n = len(s)

answer = []
for i in range(n):
    if t[i] < s[i]:
        s[i] = t[i]
        p = ''.join(s)
        answer.append(p)

for i in range(n-1, -1, -1):
    if t[i] > s[i]:
        s[i] = t[i]
        p = ''.join(s)
        answer.append(p)
print(len(answer))
for i in answer:
    print(i)
