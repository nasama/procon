X = int(input())
a = 100
ans = 0
while True:
    a = int(a*1.01)
    ans+=1
    if a >= X:
        print(ans)
        break