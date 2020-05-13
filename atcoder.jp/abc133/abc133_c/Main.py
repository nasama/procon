L, R = map(int,input().split())
if R-L >= 2018:
    ans = 0
elif L%2019 > R%2019:
    ans = 0
else:
    ans = 2018
    for i in range(L,R):
        for j in range(i+1,R+1):
            ans = min(ans, (i*j)%2019)
print(ans)


