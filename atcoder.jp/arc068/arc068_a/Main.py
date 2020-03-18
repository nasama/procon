N = int(input())
if 1 <= N%11 <= 6:
    print(N//11*2+1)
elif 7 <= N%11:
    print(N//11*2+2)
elif N%11==0:
    print(N//11*2)