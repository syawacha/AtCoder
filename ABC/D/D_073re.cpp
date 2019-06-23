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
int INF = 1000000007;

int main(){
  int N,M,R;
  cin >> N >> M >> R;
  int r[R];
  for(int i=0;i<R;i++){
    cin >> r[i];
    r[i]--;
  }
  sort(r,r+R);
  int d[N][N];
  fill(d[0],d[N],INF);
  for(int i=0;i<N;i++) d[i][i] = 0;
  for(int i=0;i<M;i++){
    int a,b,c;
    cin >> a >> b >> c;
    a--; b--;
    d[a][b] = c;
    d[b][a] = c;
  }

  //ワーシャルフロイド
  for(int k=0;k<N;k++){
    for(int i=0;i<N;i++){
      for(int j=0;j<N;j++){
        d[i][j] = min(d[i][j], d[i][k]+d[k][j]);
      }
    }
  }

  /*for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      cout << d[i][j];
    }
    cout << endl;
  }*/

  int mn = INF;
  do{
    int tmp = 0;
    for(int i=0;i<R-1;i++){
      tmp += d[r[i]][r[i+1]];
    }
    mn = min(mn,tmp);
  }while(next_permutation(r,r+R));

  cout << mn << endl;
  return 0;
}
