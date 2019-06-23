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

ll MOD = 1000000007LL;

int main(){
  int T;
  cin >> T;
  int a[350];
  fill(a, a+350, 0);
  for(int i=0;i<T;i++) cin >> a[i];

  ll dp[350][650];
  fill(dp[0], dp[350], 0LL);
  for(int j=0;j<=a[0];j++) dp[0][j] = 1LL;

  for(int i=0;i<349;i++){
    for(int j=0;j<650;j++){
      if(j % 2 == 0){
        for(int k=0;k<=a[i+1];k++){
          int pos = j / 2 + k;
          if(pos < 650){
            dp[i+1][pos] += dp[i][j];
            dp[i+1][pos] %= MOD;
          }
        }
      }
    }
  }

  /*for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
      cout << dp[i][j];
    }
    cout << endl;
  }*/

  ll ans = 0LL;
  for(int i=0;i<350;i++){
    ans += dp[i][1];
    ans %= MOD;
  }

  cout << ans << endl;
  return 0;
}
