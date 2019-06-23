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

int main(){
  int N,M,Q;
  cin >> N >> M >> Q;
  int L[M],R[M];
  for(int i=0;i<M;i++) cin >> L[i] >> R[i];
  int p[Q],q[Q];
  for(int i=0;i<Q;i++) cin >> p[i] >> q[i];

  //二次元累積和
  int sum[N+1][N+1];
  fill(sum[0],sum[N+1],0);
  for(int i=0;i<M;i++){
    sum[L[i]][R[i]]++;
  }
  for(int i=1;i<=N;i++){
    for(int j=1;j<=N;j++){
      sum[i][j] += sum[i-1][j];
      sum[i][j] += sum[i][j-1];
      sum[i][j] -= sum[i-1][j-1];
    }
  }

  //クエリ
  for(int k=0;k<Q;k++){
    int ans = 0;
    ans += sum[q[k]][q[k]];
    ans -= sum[q[k]][p[k]-1];
    ans -= sum[p[k]-1][q[k]];
    ans += sum[p[k]-1][p[k]-1];
    cout << ans << endl;
  }
  return 0;
}
