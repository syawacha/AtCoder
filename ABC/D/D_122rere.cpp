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
ll dp[101][4][4][4];

int main(){
  int N;
  cin >> N;

  for(int j=0;j<4;j++){
    for(int k=0;k<4;k++){
      for(int l=0;l<4;l++){
        dp[3][j][k][l] = 1;
      }
    }
  }

  dp[3][0][2][1] = 0;
  dp[3][0][1][2] = 0;
  dp[3][2][0][1] = 0;

  for(int i=4;i<=N;i++){
    for(int j=0;j<4;j++){
      for(int k=0;k<4;k++){
        for(int l=0;l<4;l++){
          for(int m=0;m<4;m++){
            if(j==0 && l==2 && m==1) continue;
            if(j==0 && k==2 && m==1) continue;
            if(j==0 && k==2 && l==1) continue;
            if(j==0 && k==1 && l==2) continue;
            if(j==2 && k==0 && l==1) continue;
            if(k==0 && l==2 && m==1) continue;
            if(k==0 && l==1 && m==2) continue;
            if(k==2 && l==0 && m==1) continue;

            dp[i][k][l][m] += dp[i-1][j][k][l];
            dp[i][k][l][m] %= MOD;
          }
        }
      }
    }
  }

  ll ans = 0LL;
  for(int j=0;j<4;j++){
    for(int k=0;k<4;k++){
      for(int l=0;l<4;l++){
        ans += dp[N][j][k][l];
      }
    }
  }

  ans %= MOD;
  cout << ans << endl;
  return 0;
}
