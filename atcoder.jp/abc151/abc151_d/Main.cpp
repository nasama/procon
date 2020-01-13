#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rep2(i,n) for (int i = 1; i < (n); ++i)
using namespace std;
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
const int INF = 100000000;
typedef pair<int, int> P;

char maze[25][25];
int N, M;
int sx, sy;
int gx, gy;
vector<vector<int>> d(25, vector<int>(25));
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int bfs(int sx, int sy) {
    queue<P> que;
    rep(i,N){
        rep(j,M){
            d[i][j] = INF;
        }
    }
    que.push(P(sx,sy));
    d[sx][sy] = 0;
    while(que.size()){
        P p = que.front(); que.pop();
        for(int i = 0; i < 4; i++) {
            int nx = p.first + dx[i], ny = p.second + dy[i];
            if(0 <= nx && nx < N && 0 <= ny && ny < M && maze[nx][ny] != '#' && d[nx][ny]==INF) {
                que.push(P(nx,ny));
                d[nx][ny] = d[p.first][p.second] + 1;
            }
        }
    }
    int ans = 0;
    rep(i,N){
        rep(j,M){
            if(d[i][j]!=INF)ans = max(ans, d[i][j]);
        }
    }   
    return ans;
} 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> N >> M;
    int res = 0;
    rep(i,N){
        cin >> maze[i];
    }
    rep(i,N){
        rep(j,M) {
            if(maze[i][j] == '.') res = max(bfs(i,j), res);
        }
    }
    cout << res << endl;
    return 0;
}
