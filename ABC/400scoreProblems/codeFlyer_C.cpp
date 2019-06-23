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
  ll D;
  cin >> N >> D;
  ll x[N];
  for(int i=0;i<N;i++) cin >> x[i];

  ll ans = 0LL;
  for(int j=0;j<N;j++){
    ll cnt1 = j - (lower_bound(x, x + N, x[j] - D) - x);
    ll cnt2 = (upper_bound(x, x + N, x[j] + D) - x) - j - 1;
    //cout << cnt1 << cnt2 << endl;

    ans += cnt1 * cnt2;
  }

  for(int i=0;i<N;i++){
    ll cnt = (upper_bound(x, x + N, x[i] + D) - x) - i - 1;

    if(cnt > 1){
      ans -= cnt * (cnt - 1) / 2;
    }
  }

  cout << ans << endl;
  return 0;
}
