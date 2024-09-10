n, m = map(int, input().split())

segTree = [[0, 0] for x in range(4 * n)]

ans = [0 for x in range(n)]


def updateSegTree(v, tl, tr, l, r, new_val):
    if l > r:
        return 0
    if tl == tr:
        segTree[v][0] = new_val
    else:
        if tl == l and tr == r:
            if segTree[v][0] == 0:
                segTree[v][0] = new_val
            elif segTree[v][1] == 0:
                segTree[v][1] = new_val
            return
        tm = (tl + tr)//2
        updateSegTree(v * 2+1, tl, tm, l, min(r, tm), new_val)
        updateSegTree(v * 2+2, tm+1, tr, max(l, tm+1), r, new_val)


def getResults(v, tl, tr, curw, w):
    cur = segTree[v][0]
    curW = segTree[v][1]
    if cur == 0:
        cur = curw
        curW = w
    else:
        if curW == 0 and curw != cur:
            curW = curw

    if tl == tr:
        if tl == cur - 1:
            ans[tl] = curW
        else:
            ans[tl] = cur
        return
    tm = (tl+tr)//2
    getResults(v * 2+1, tl, tm, cur, curW)
    getResults(v * 2+2, tm+1, tr, cur, curW)


for _ in range(m):
    l, r, x = map(int, input().split())

    updateSegTree(0, 0, n-1, l-1, r-1, x)
getResults(0, 0, n-1, 0, 0)

for i in ans:
    print(i, end=" ")
