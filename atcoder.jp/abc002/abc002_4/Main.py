N, M = map(int, input().split())
newL = set()
for i in range(M):
    x,y = map(int, input().split())
    newL.add((x-1,y-1))
#print(newL)

ans = 0
for bit in range(1 << N):
    S = []
    for i in range(N):
        if bit & (1 << i):
            S.append(i)
    #print(S)
    flag = True
    for i, a in enumerate(S):
        for b in S[i+1:]:
            if not (a,b) in newL:
                flag = False
                #print(flag)
                break
    if flag:
        ans = max(ans, len(S))
        #print(S)
print(ans)