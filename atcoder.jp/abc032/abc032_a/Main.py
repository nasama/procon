import fractions
a, b, n = [int(input()) for _ in range(3)]
lcm = a*b//fractions.gcd(a,b)
ans = 0
while ans < n:
  ans+=lcm
print(ans)