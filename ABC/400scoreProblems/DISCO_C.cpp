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

ll pow_MOD(ll a, int b){
  if(b == 0) return 1;
  else{
    return pow_MOD(a, b - 1) * a % MOD;
  }
}

ll com10[11] = {1, 10, 45, 120, 210, 252, 210, 120, 45, 10, 1};

int main(){
  ll N;
  cin >> N;

  ll ans = 0LL;
  for(int i = 1; i <= N; i++){
    //pの最大がiであるようなpとqの選び方
    ll p = 0LL;  //pの選び方
    for(int j = 1; j <= 10; j++){
      //jは最大値の個数
      p += com10[j] * pow_MOD(i - 1, 10 - j) % MOD;
    }

    ll M = N / i;
    ll q = pow_MOD(M, 10);

    ans += p * q;
    ans %= MOD;
  }

  cout << ans << endl;
  return 0;
}
