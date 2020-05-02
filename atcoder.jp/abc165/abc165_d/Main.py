A,B,N = map(int, input().split())
if N < B:
    ans = A*N//B 
else:
    ans = A*(B-1)//B
print(ans)