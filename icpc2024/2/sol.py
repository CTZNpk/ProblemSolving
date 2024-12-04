n = int(input())


for _ in range(n):
    s = "arcacer"

    def sol(s):
        st = 0
        ed = len(s)-1
        totDist = 0
        while st < ed:
            if s[st] != s[ed]:
                temped = ed
                cnt1 = 0
                while (s[temped] != s[st]):
                    cnt1 += 1
                    temped -= 1
                cnt2 = 0
                tempst = st
                while (s[tempst] != s[ed]):
                    cnt2 += 1
                    tempst += 1

                if (cnt1 < cnt2):
                    while (temped < ed):
                        s[temped], s[temped+1] = s[temped+1], s[temped]
                        temped += 1
                    totDist += cnt1
                else:
                    while (tempst > ed):
                        s[tempst], s[tempst-1] = s[tempst-1], s[tempst]
                        tempst -= 1
                    totDist += cnt2
            st += 1
            ed -= 1
        print(totDist)
    sol(s)
