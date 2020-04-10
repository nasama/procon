def primes(n):
    is_prime = [1]*(n+1)
    is_prime[0] = 0
    is_prime[1] = 0
    for i in range(2, int(n**0.5) + 1):
        if not is_prime[i]:
            continue
        for j in range(i*2,n+1,i):
            is_prime[j] = 0
    return is_prime

max = 100001
prime = primes(max)
a = [0]*max
for i in range(max):
    if i % 2 == 0:
        continue
    if prime[i] and prime[(i+1)//2]:
        a[i] = 1

s = [0]*(max+1)
for i in range(max):
    s[i+1] = s[i] + a[i]

Q = int(input())
for i in range(Q):
    l,r = map(int, input().split())
    print(s[r+1]-s[l])