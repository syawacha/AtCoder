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

int inf = 10000000;

int main(){
  int N,ma,mb;
  cin >> N >> ma >> mb;
  int a[N],b[N],c[N];
  for(int i=0;i<N;i++) cin >> a[i] >> b[i] >> c[i];

  int dp[401][401];
  fill(dp[0],dp[401],inf);

  dp[0][0] = 0;
  for(int i=0;i<N;i++){
    for(int j=400;j>=0;j--){
      for(int k=400;k>=0;k--){
        if(dp[j][k]!=inf && j+a[i]<=400 && k+b[i]<=400){
          dp[j+a[i]][k+b[i]] = min(dp[j+a[i]][k+b[i]], dp[j][k] + c[i]);
        }
      }
    }
  }

  int ans = inf;
  for(int i=1 ; ; i++){
    if(i*ma > 400 || i*mb > 400) break;
    else {
      ans = min(ans, dp[i*ma][i*mb]);
    }
  }

  if(ans == inf) cout << -1 << endl;
  else cout << ans << endl;
  return 0;
}
