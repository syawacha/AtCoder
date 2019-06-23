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
  ll H,W;
  cin >> H >> W;

  //4通りの分け方
  ll ans = 1000000000LL;

  //---に分割
  if(H%3 == 0) ans = min(ans,0LL);
  else ans = min(ans,W);

  //|||に分割
  if(W%3 == 0) ans = min(ans,0LL);
  else ans = min(ans,H);

  //|--に分割
  for(int i=1;i<=W;i++){
    ll sz[3];
    sz[0] = i * H;
    sz[1] = (W - i) * (H / 2);
    sz[2] = (W - i) * (H - H / 2);
    sort(sz,sz+3);
    ans = min(ans, sz[2]-sz[0]);
  }

  //-||に分割
  for(int i=1;i<=H;i++){
    ll sz[3];
    sz[0] = i * W;
    sz[1] = (H-i) * (W / 2);
    sz[2] = (H-i) * (W - W/2);
    sort(sz,sz+3);
    ans = min(ans, sz[2]-sz[0]);
  }

  cout << ans << endl;
  return 0;
}
