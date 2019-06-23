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
  int N,M;
  cin >> N >> M;
  ll x[N],y[N],z[N];
  for(int i=0;i<N;i++) cin >> x[i] >> y[i] >> z[i];

  //bit探索
  ll ans = 0LL;
  for(int i=0 ; i<(1 << 3) ; i++){
    int key[3];
    for(int j=0;j<3;j++){
      if(i & (1<<j)) key[j] = 1;
      else key[j] = -1;
    }

    ll W[N] = {};
    for(int j=0;j<N;j++){
      W[j] += x[j] * key[2];
      W[j] += y[j] * key[1];
      W[j] += z[j] * key[0];
    }

    sort(W,W+N);
    reverse(W,W+N);

    ll sum = 0LL;
    for(int j=0;j<M;j++){
      sum += W[j];
    }

    ans = max(ans , sum);
  }

  cout << ans << endl;
  return 0;
}
