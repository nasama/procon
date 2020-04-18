N = int(input())
H = [0]*N
S = [0]*N
for i in range(N):
    H[i], S[i] = map(int, input().split())

def f(mid): 
    count = [0]*N
    for i in range(N):
        if H[i] > mid:
            return False
        else:
            count[min(N-1, (mid-H[i])//S[i])]+=1
    
    for j in range(N-1):
        count[j+1] += count[j]
    for j in range(N):
        if count[j] > j+1:
            return False
    return True

l = -1
r = max(H)+N*max(S)
while r-l > 1:
    mid = (r+l)//2
    if f(mid):
        r = mid
    else:
        l = mid

print(r)