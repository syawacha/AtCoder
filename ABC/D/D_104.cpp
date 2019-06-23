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

#define MOD 1000000007LL

int main(){
  string S;
  cin >> S;
  int N = S.size();

  ll dp[4][N];
  if(S[0]=='A'){
    dp[0][0]=1;
    dp[1][0]=1;
  }else if(S[0]=='B'){
    dp[0][0]=1;
    dp[1][0]=0;
  }else if(S[0]=='C'){
    dp[0][0]=1;
    dp[1][0]=0;
  }else if(S[0]=='?'){
    dp[0][0]=3;
    dp[1][0]=1;
  }
  dp[2][0]=0;
  dp[3][0]=0;

  for(int j=1;j<N;j++){
    if(S[j]=='A'){
      dp[0][j] = dp[0][j-1];
      dp[1][j] = dp[1][j-1] + dp[0][j];
      dp[2][j] = dp[2][j-1];
      dp[3][j] = dp[3][j-1];
    }
    else if(S[j]=='B'){
      dp[0][j] = dp[0][j-1];
      dp[1][j] = dp[1][j-1];
      dp[2][j] = dp[1][j-1] + dp[2][j-1];
      dp[3][j] = dp[3][j-1];
    }
    else if(S[j]=='C'){
      dp[0][j] = dp[0][j-1];
      dp[1][j] = dp[1][j-1];
      dp[2][j] = dp[2][j-1];
      dp[3][j] = dp[2][j-1] + dp[3][j-1];
    }
    else if(S[j]=='?'){
      dp[0][j] = dp[0][j-1] * 3LL;
      dp[1][j] = dp[1][j-1] * 3LL + dp[0][j-1];
      dp[2][j] = dp[2][j-1] * 3LL + dp[1][j-1];
      dp[3][j] = dp[3][j-1] * 3LL + dp[2][j-1];
    }

    dp[0][j] %= MOD;
    dp[1][j] %= MOD;
    dp[2][j] %= MOD;
    dp[3][j] %= MOD;
  }

  cout << dp[3][N-1] << endl;
  return 0;
}
