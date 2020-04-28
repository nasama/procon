A = list(map(int, input().split()))
A.sort()
ans  = (2*A[2]-A[1]-A[0]+1)//2
if (A[1]-A[0])%2:
    ans += 1
print(ans)