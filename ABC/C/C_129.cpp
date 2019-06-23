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
  int N, M;
  cin >> N >> M;
  int a[M];
  for(int i = 0; i < M; i++) cin >> a[i];

  bool st[N + 1];
  fill(st, st + N + 1, true);
  for(int i = 0; i < M; i++) st[a[i]] = false;

  ll dp[N + 1];
  dp[0] = 1;
  for(int i = 1; i <= N; i++){
    if(i == 1){
      if(st[i]) dp[i] = 1;
      else dp[i] = 0;
      continue;
    }

    if(st[i]){
      dp[i] = dp[i - 1] + dp[i - 2];
      dp[i] %= MOD;
    }
    else{
      dp[i] = 0;
    }
  }

  cout << dp[N] << endl;
  return 0;

}
