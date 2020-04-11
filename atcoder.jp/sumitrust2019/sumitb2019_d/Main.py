N = int(input())
S = input()
ans = 0
for i in range(1000):
    num = str(i).zfill(3)
    flag2 = True
    start = 0
    for j in range(3):
        flag = False
        for k in range(start,N):
            if num[j] == S[k]:
                flag = True
                start = k+1
                break
        if flag == False:
            flag2 = False
            break    
    if flag2:
        ans+=1
    
print(ans)