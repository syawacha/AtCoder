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

ll MOD = 1000000007;

int main(){
  int N;
  cin >> N;

  ll dp[16][N+1];
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
    dp[0][i] = (dp[0][i-1] + dp[4][i-1] + dp[8][i-1] + dp[12][i-1]) % MOD;
    dp[1][i] = (dp[0][i-1] + dp[4][i-1] + dp[12][i-1]) % MOD;
    dp[2][i] = (dp[0][i-1] + dp[4][i-1] + dp[8][i-1] + dp[12][i-1]) % MOD;
    dp[3][i] = (dp[0][i-1] + dp[4][i-1] + dp[8][i-1] + dp[12][i-1]) % MOD;

    dp[4][i] = (dp[1][i-1] + dp[5][i-1] + dp[9][i-1] + dp[13][i-1]) % MOD;
    dp[5][i] = (dp[1][i-1] + dp[5][i-1] + dp[9][i-1] + dp[13][i-1]) % MOD;
    dp[6][i] = (dp[5][i-1] + dp[9][i-1] + dp[13][i-1]) % MOD;
    dp[7][i] = (dp[1][i-1] + dp[5][i-1] + dp[9][i-1] + dp[13][i-1]) % MOD;

    dp[8][i] = (dp[2][i-1] + dp[6][i-1] + dp[10][i-1] + dp[14][i-1]) % MOD;
    dp[9][i] = (dp[6][i-1] + dp[10][i-1] + dp[14][i-1]) % MOD;
    dp[10][i] = (dp[2][i-1] + dp[6][i-1] + dp[10][i-1] + dp[14][i-1]) % MOD;
    dp[11][i] = (dp[2][i-1] + dp[6][i-1] + dp[10][i-1] + dp[14][i-1]) % MOD;

    dp[12][i] = (dp[3][i-1] + dp[7][i-1] + dp[11][i-1] + dp[15][i-1]) % MOD;
    dp[13][i] = (dp[3][i-1] + dp[7][i-1] + dp[11][i-1] + dp[15][i-1]) % MOD;
    dp[14][i] = (dp[3][i-1] + dp[7][i-1] + dp[11][i-1] + dp[15][i-1]) % MOD;
    dp[15][i] = (dp[3][i-1] + dp[7][i-1] + dp[11][i-1] + dp[15][i-1]) % MOD;
  }

  ll ans = 0;
  for(int i=0;i<16;i++){
    ans += dp[i][N];
  }

  ans %= MOD;
  cout << ans << endl;
  return 0;

}
