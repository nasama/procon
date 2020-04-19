N = int(input())
A = list(map(int, input().split()))
L = [0]*N
for i in range(N-1):
    L[A[i]-1]+=1
for i in range(N):
    print(L[i])