import fractions
def lcm(x, y):
    return (x*y) // fractions.gcd(x,y)
A, B, C, D = map(int,input().split())
L = lcm(C,D)
#A-1以下のCorDで割り切れる個数
a = (A-1)//C + (A-1)//D - (A-1)//lcm(C,D)
#B以下のCorDで割り切れる個数
b = B//C + B//D - B//lcm(C,D)
ans = B-(A-1) - (b-a)
print(ans)