import collections
N = int(input())
S = [input() for i in range(N)]
ans = collections.defaultdict(int)
for i in S:
  ans[i] += 1
  
max_num = max(ans.values())
max_list = [kv[0] for kv in ans.items() if kv[1] == max_num] 
max_list.sort()
for i in max_list:
  print(i)