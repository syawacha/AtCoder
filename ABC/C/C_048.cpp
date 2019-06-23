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
  ll x;
  cin >> N >> x;
  ll a[N];
  for(int i=0;i<N;i++) cin >> a[i];

  ll ans = 0LL;
  for(int i=0;i<N-1;i++){
    ll t = a[i] + a[i+1] - x;
    if(t <= 0) continue;

    if(t <= a[i+1]){
      a[i+1] -= t;
    } else {
      a[i+1] = 0;
      a[i] -= t - a[i+1];
    }

    ans += t;
  }

  cout << ans << endl;
  return 0;
}
