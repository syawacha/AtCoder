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
  int N;
  cin >> N;

  ll dp[16][N+1];
  fill(dp[0],dp[16],0LL);
  dp[0][2] = 1;
  dp[1][2] = 1;
  dp[2][2] = 1;
  dp[3][2] = 1;
  dp[4][2] = 1;
  dp[5][2] = 1;
  dp[6][2] = 1;
  dp[7][2] = 1;
  dp[8][2] = 1;
  dp[9][2] = 1;
  dp[10][2] = 1;
  dp[11][2] = 1;
  dp[12][2] = 1;
  dp[13][2] = 1;
  dp[14][2] = 1;
  dp[15][2] = 1;

  dp[0][3] = 4;
  dp[1][3] = 3;
  dp[2][3] = 4;
  dp[3][3] = 4;
  dp[4][3] = 4;
  dp[5][3] = 4;
  dp[6][3] = 3;
  dp[7][3] = 4;
  dp[8][3] = 4;
  dp[9][3] = 3;
  dp[10][3] = 4;
  dp[11][3] = 4;
  dp[12][3] = 4;
  dp[13][3] = 4;
  dp[14][3] = 4;
  dp[15][3] = 4;

  for(int i=4;i<=N;i++){
    ll sum = 0;
    for(int j=0;j<16;j++){
      sum += dp[j][i-2];
    }

    dp[0][i] = sum % MOD;
    dp[1][i] = (sum - dp[2][i-2] - dp[6][i-2] - dp[10][i-2] - dp[14][i-2]) % MOD;
    dp[2][i] = sum % MOD;
    dp[3][i] = sum % MOD;
    dp[4][i] = (sum - dp[2][i-2] - dp[8][i-2]) % MOD;
    dp[5][i] = (sum - dp[2][i-2] - dp[8][i-2]) % MOD;
    dp[6][i] = (sum - dp[0][i-2] - dp[4][i-2] - dp[8][i-2] - dp[12][i-2] - dp[2][i-2]) % MOD;
    dp[7][i] = (sum - dp[2][i-2] - dp[8][i-2]) % MOD;
    dp[8][i] = (sum - dp[1][i-2]) % MOD;
    dp[9][i] = (sum - dp[0][i-2] - dp[1][i-2] - dp[2][i-2] - dp[3][i-2] - dp[4][i-2] - dp[8][i-2] - dp[12][i-2]) % MOD;
    dp[10][i] = (sum - dp[1][i-2]) % MOD;
    dp[11][i] = (sum - dp[1][i-2]) % MOD;
    dp[12][i] = sum % MOD;
    dp[13][i] = (sum - dp[2][i-2]) % MOD;
    dp[14][i] = sum % MOD;
    dp[15][i] = sum % MOD;
  }

  ll ans = 0LL;
  for(int i=0;i<16;i++){
    ans += dp[i][N];
  }

  ans %= MOD;
  cout << ans << endl;
  return 0;
}
