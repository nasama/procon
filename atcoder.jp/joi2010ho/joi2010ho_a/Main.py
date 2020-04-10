n, m = map(int, input().split())
a = [0]*(n-1)
s = [0]*n

for i in range(n-1):
    a[i] = int(input())

for i in range(n-1):
    s[i+1] = s[i] + a[i]

ans = 0
di = 0
for i in range(m):
    b = int(input())
    ans += abs(s[di+b]-s[di])
    di += b
print(ans%100000)