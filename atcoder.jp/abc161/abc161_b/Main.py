N, M = map(int, input().split())
A = list(map(int, input().split()))
sumnum = sum(A)
count = 0
for i in A:
    if i >= sumnum*(1/(4*M)):
        count+=1
    
if M <= count:
    print('Yes')
else:
    print('No')