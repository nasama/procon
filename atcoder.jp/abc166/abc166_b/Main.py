n, k = map(int, input().split())
S = [0]*n
for i in range(k):
    d = int(input())
    A = list(map(int, input().split()))
    for j in range(len(A)):
        S[A[j]-1]+=1

print(S.count(0))