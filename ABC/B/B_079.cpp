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
  int N;
  cin >> N;

  ll dp[N+1];
  dp[0] = 2LL;
  dp[1] = 1LL;
  for(int i=2;i<=N;i++){
    dp[i] = dp[i-1] + dp[i-2];
  }

  cout << dp[N] << endl;
  return 0;
}
