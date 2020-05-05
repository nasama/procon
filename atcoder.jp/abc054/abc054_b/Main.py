N, M = map(int, input().split())
A = [input() for _ in range(N)]
B = [input() for _ in range(M)]
ans = 'No'
for i in range(N-M+1):
    flag1 = False
    for j in range(N-M+1):
        flag = True
        for k in range(M):
            if A[i+k][j:j+M] != B[k]:
                flag = False
                break
        if flag:
            ans = 'Yes'
            flag1 = True
            break
    if flag1:
        break
    
print(ans)