#include <bits/stdc++.h>
using namespace std;
int m,n;
const int maxN = 1e3+5;
bool check[maxN][maxN];
long long d[maxN][maxN];
int moveX[] = {-2,-2,2,2,-1,1,-1,1};
int moveY[] = {-1,1,-1,1,-2,-2,2,2};
void bfs(int sx,int sy,int x,int y)
{
    for(int i=1;i<=m;i++){
        fill_n(check[i],n+1,false);
        fill_n(d[i],n+1,0);
    }
    queue<pair<int,int>> q;
    q.push({sx,sy});
    check[sx][sy] = true;
    while(!q.empty())
    {
        int x1 = q.front().first;
        int y1 = q.front().second;
        q.pop();
        if (x1==x && y1==y) return;
        for(int i=0;i<8;i++)
        {
            int u = x1 + moveX[i];
            int v = y1 + moveY[i];
            if (u>m || u<1) continue;
            if (v>n || v<1) continue;
            if (!check[u][v]){
                check[u][v] = true;
                d[u][v] = d[x1][y1] + 1;
                q.push({u,v});
            }
        }
    }
    d[x][y] = -1;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int x1,y1,x2,y2;
    cin >> m >> n;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    bfs(x1,y1,x2,y2);
    cout << d[x2][y2];
    return 0; 
}
