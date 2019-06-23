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

ll N, A, B;
ll h[100000];

//n回で倒しきれるか
bool jud(ll n){
  ll cnt = 0;
  for(int i=0;i<N;i++){
    ll tmp = h[i];
    tmp -= n * B;
    if(tmp > 0){
      cnt += (tmp + (A-B) - 1) / (A-B);
    }
  }

  if(cnt > n) return false;
  else return true;
}

//==========================================================
int main(){
  cin >> N >> A >> B;
  for(int i=0;i<N;i++) cin >> h[i];

  ll l = 0LL;
  ll r = 2000000000LL;
  while(r - l > 1LL){
    ll mid = (l + r) / 2LL;
    if(jud(mid)) r = mid;
    else l = mid;
  }

  cout << r << endl;
  return 0;
}
