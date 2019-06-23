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

ll kaizyou(int n){
  ll ans = 1;
  while(n>=1){
    ans *= n;
    ans %= MOD;
    n--;
  }
  return ans;
}

int main(){
  int N,M;
  cin >> N >> M;

  ll ans;
  if(N==M){
    ans = kaizyou(N) * kaizyou(M) * 2;
    ans %= MOD;
  }
  else if(abs(N-M)==1){
    ans = kaizyou(M) * kaizyou(N);
    ans %= MOD;
  }
  else ans = 0;

  cout << ans << endl;
  return 0;
}
