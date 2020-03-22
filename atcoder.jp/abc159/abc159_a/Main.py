a,b = map(int, input().split())
if a == 0 and b == 0:
    print(0)
elif a == 0:
    print(b*(b-1)//2)
elif b == 0:
    print(a*(a-1)//2)
else:
    print(a*(a-1)//2+b*(b-1)//2)