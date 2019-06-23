#include <algorithm>
#include <iostream>
#include <iomanip>
#include <cstring>
#include <string>
#include <vector>
#include <queue>
#include <cmath>
#include <stack>
#include <set>
#include <map>
typedef long long ll;
typedef unsigned int uint;
using namespace std;
typedef pair<int,int> P;
int INF = 1000000000;
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main(){
  int H,W;
  cin >> H >> W;
  char s[H][W];
  int cnt_w = 0;
  for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
      cin >> s[i][j];
      if(s[i][j]=='.') cnt_w++;
    }
  }

  int d[H][W];
  fill(d[0],d[H],INF);
  d[0][0] = 0;

  //bfs
  queue<P> que;
  que.push(P(0,0));

  while(que.size()){
    P p = que.front();
    que.pop();
    if(p.first == H-1 && p.second == W-1) break;

    for(int i=0;i<4;i++){
      int nx = p.first + dx[i];
      int ny = p.second + dy[i];

      if(0<=nx && nx<=H-1 && 0<=ny && ny<=W-1 && s[nx][ny]=='.' && d[nx][ny]==INF){
        que.push(P(nx,ny));
        d[nx][ny] = d[p.first][p.second] + 1;
      }
    }
  }



  if(d[H-1][W-1]==INF){
    cout << -1 << endl;
  }
  else{
    cout << cnt_w - d[H-1][W-1] - 1;
  }

  return 0;
}
