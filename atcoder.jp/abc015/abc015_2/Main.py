N = int(input())
A = list(map(int, input().split()))
N-=A.count(0)
print((sum(A)+N-1)//N)