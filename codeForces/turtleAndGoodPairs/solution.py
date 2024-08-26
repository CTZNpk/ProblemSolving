t = int(input())

for _ in range(t):
    n = int(input())
    s = input()

    def sol():
        listS = list(s)
        listS.sort()
        answer = ""
        i = 0
        j = n-1
        while i <= j:
            answer += s[i]
            i += 1
            if i <= j:
                answer += s[j]
                j -= 1

        return answer

    print(sol())
