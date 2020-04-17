N, M, X = map(int, input().split())
A = list(map(int, input().split()))

count1 = 0
count2 = 0
for i in range(0,X):
    if i in A:
        count1+=1

for i in range(X+1,N+1):
    if i in A:
        count2+=1

print(min(count1, count2))