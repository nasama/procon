def rle(s):
    tmp, count = s[0], 1
    ans = []
    for i in range(1,len(s)):
        if tmp == s[i]:
            count += 1
        else:
            ans.append((tmp,count))
            tmp = s[i]
            count = 1
    ans.append((tmp,count))
    return ans


S = input()
R = rle(S)
A = [0]*len(S)
key = -1
for (c, count) in R:
    plus = (count-1)//2+1
    if c == 'R':
        key += count
        A[key] += plus
        A[key+1] += count-plus
        
    else:
        A[key+1] += plus
        A[key] += count-plus
        key += count

print(*A)