A,B,C= map(int, input().split())
K = int(input())
maxnum = max(A,B,C)
while K:
  maxnum *= 2
  K-=1
print(A+B+C-max(A,B,C)+maxnum)