N = int(input())
S = input()
r,g,b = 0,0,0
for i in S:
    if i == 'R':
        r+=1
    if i == 'G':
        g+=1       
    if i == 'B':
        b+=1 

count = 0
for i in range(1,N):
    for j in range(N):
        if j+i*2 >= N:
            break
        if S[j] != S[j+i] and S[j] != S[j+2*i] and S[j+i] != S[j+2*i]:
                count+=1
print(r*g*b-count)