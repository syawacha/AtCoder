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
  int N,K;
  cin >> N >> K;

  ll ans = 0LL;
  for(int b=K+1 ; b<=N ; b++){
    //N=pb+r
    int p = N/b;
    int r = N - p*b;

    ans += p*(b-K) + max(0, r+1-K);
  }

  if(K==0){
    ans -= (N - K);
  }

  cout << ans << endl;
  return 0;
}
