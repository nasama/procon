from collections import deque           
#頂点数と辺数
N, M = map(int, input().split())

#グラフ入力受取(無向グラフを想定)
G = [[] for _ in range(N)]
for i in range(M):
    a, b = map(int, input().split())
    a-=1
    b-=1
    G[a].append(b)
    G[b].append(a)

#BFSのためのデータ構造
dist = [False]*N #全頂点を「未訪問」に初期化
que = deque()

#初期条件（頂点0を初期ノードとする）
dist[0] = True
que.append(0) #0を訪問予定頂点にする
ans = [0]*N

#BFS開始（キューが空になるまで探索を行う）
while len(que)!=0:
    v = que.popleft() #キューから先頭頂点を取り出す

    #v から辿れる頂点を全て調べる
    for nv in G[v]:
        #すでに発見済みの頂点は探索しない
        if dist[nv]:
            continue 

        #新たな白色頂点 nv について距離情報を更新してキューに追加する
        dist[nv] = True
        ans[nv] = v 
        que.append(nv)

    #結果出力（各頂点の頂点 0 からの距離を見る）
if any(dist):
    print("Yes")
    for v in range(1,N):
        print(ans[v]+1)
else:
    print("No")

