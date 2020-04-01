N = int(input())
W = [input() for _ in range(N)]
S = set()
ans = 'Yes'
for i in range(N-1):
    if W[i] in S:
        ans = 'No'
        break
    else:
        S.add(W[i])
    
    if W[i][-1] != W[i+1][0]:
        ans = 'No'
        break 

if W[N-1] in S:
    ans = 'No'

print(ans)