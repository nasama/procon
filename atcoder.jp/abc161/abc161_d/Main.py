from collections import deque
K = int(input())
que = deque([1,2,3,4,5,6,7,8,9])

for i in range(K):
    v = que.popleft()
    if v%10!=0:
        que.append(10*v+v%10-1)
    que.append(10*v+v%10)
    if v%10!=9:
        que.append(10*v+v%10+1)
print(v)