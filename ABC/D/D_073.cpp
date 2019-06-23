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
using namespace std;
#define INF 1000000007

int d[201][201];
int N,M,R;
int r[8];
bool used[8];

int dfs(int c, int v){
  if(c == R){
    used[v] = false;
    return 0;
  }

  used[v] = true;
  int mn = INF;
  for(int i=0;i<R;i++){
    if(!used[i]){
      mn = min(mn, dfs(c+1,i)+d[r[v]][r[i]]);
    }
  }
  used[v] = false;
  return mn;
}

int main(){
  cin >> N >> M >> R;
  for(int i=0;i<R;i++){
    cin >> r[i];
    r[i]--;
  }

  fill(d[0],d[201],INF);
  for(int i=0;i<M;i++){
    int a,b,c;
    cin >> a >> b >> c;
    a--; b--;
    d[a][b] = c;
    d[b][a] = c;
  }
  for(int i=0;i<N;i++) d[i][i]=0;

  //ワーシャルフロイド
  for(int k=0;k<N;k++){
    for(int i=0;i<N;i++){
      for(int j=0;j<N;j++){
        d[i][j] = min(d[i][j], d[i][k]+d[k][j]);
      }
    }
  }

  /*cout << endl;
  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      cout << d[i][j] << " ";
    }
    cout << endl;
  }*/

  fill(used,used+R,false);

  int mn = INF;
  for(int i=0;i<R;i++){
    //cout << "start" << r[i] << " " << dfs(1,i) << endl;
    mn = min(mn, dfs(1,i));
  }

  //cout << endl;
  cout << mn << endl;
  return 0;
}
