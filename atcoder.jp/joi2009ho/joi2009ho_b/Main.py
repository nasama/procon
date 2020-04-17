d = int(input())
n = int(input())
m = int(input())
dlist = [int(input()) for _ in range(n-1)]
klist = [int(input()) for _ in range(m)]

dlist.append(0)
dlist.sort()


def isOK(index,key):
    if dlist[index] >= key:
        return True
    else:
        return False

def binary_search(key):
    left = -1 
    right = len(dlist) 

    while right - left > 1:
        mid = (left + right)//2
        if isOK(mid, key):
            right = mid
        else:
            left = mid
    return right
ans = 0
for i in klist:
    index = binary_search(i)
    id1 = index%n
    id2 = (index-1)%n
    minnum = min(abs(i-dlist[id1]),abs(i-dlist[id2]))
    if id1==0:
        minnum = min(minnum, abs(i-d))
    ans+=minnum
print(ans)