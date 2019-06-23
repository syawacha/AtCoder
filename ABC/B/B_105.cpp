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

int main(){
  int N;
  cin >> N;

  bool dp[101];
  fill(dp,dp+101,false);
  dp[4] = true;
  dp[7] = true;
  for(int i=8;i<=100;i++){
    if(dp[i-4] || dp[i-7]) dp[i] = true;
  }

  if(dp[N]) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}
