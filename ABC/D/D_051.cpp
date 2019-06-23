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

int inf = 1000000000;

int main(){
  int N,M;
  cin >> N >> M;
  int d[N][N];
  fill(d[0],d[N],inf);
  for(int i=0;i<N;i++) d[i][i] = 0;
  int a[M],b[M],c[M];
  for(int i=0;i<M;i++){
    cin >> a[i] >> b[i] >> c[i];
    a[i]--; b[i]--;
    d[a[i]][b[i]] = c[i];
    d[b[i]][a[i]] = c[i];
  }

  //ワーシャルフロイド
  for(int k=0;k<N;k++){
    for(int i=0;i<N;i++){
      for(int j=0;j<N;j++){
        d[i][j] = min(d[i][j] , d[i][k] + d[k][j]);
      }
    }
  }

  int cnt = 0;
  for(int i=0;i<M;i++){
    if(d[a[i]][b[i]] == c[i]) cnt++;
  }

  cout << M - cnt << endl;
  return 0;
}
