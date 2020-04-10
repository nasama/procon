S = input()
ans = 0
for i in range(len(S)):
    for j in range(i,len(S)):
        flag = True
        for k in S[i:j+1]:
            if not (k=='A' or k=='C' or k=='G' or k=='T'):
                flag = False
                break
        if flag:
            ans = max(ans, len(S[i:j+1]))
print(ans)