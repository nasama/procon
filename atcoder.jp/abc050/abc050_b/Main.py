N = int(input())
T = list(map(int, input().split()))
M = int(input())
sumnum = sum(T)
for i in range(M):
    p, x = map(int, input().split())
    print(sumnum - (T[p-1]-x))