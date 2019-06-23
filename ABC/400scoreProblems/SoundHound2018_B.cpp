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
  int N, K;
  cin >> N >> K;
  ll b[N + 1];
  for(int i = 1; i <= N; i++){
    cin >> b[i];
  }

  priority_queue<ll> q;
  ll dp[N + 1];
  dp[0] = 0;
  for(int i = 1; i < K; i++){
    dp[i] = dp[i - 1] + b[i];
  }
  q.push(0);
  for(int i = K; i <= N; i++){
    dp[i] = max(dp[i - 1] + b[i], q.top());
    q.push(dp[i - K + 1]);
  }

  cout << dp[N] << endl;
  return 0;
}
