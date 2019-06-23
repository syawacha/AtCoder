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

ll N,A,B;
ll h[100000];
map<ll,int> mp; //i回で殺しきれるか

ll bsrc(ll a, ll b){
  //cout << a << " " << b << endl;
  ll p = (b + a) / 2;

  ll cnt = 0;
  for(int i=0;i<N;i++){
    ll tmp = h[i] - p * B;
    if(tmp > 0){
      cnt += (tmp + (A-B) - 1) / (A-B);
    }
  }

  if(cnt > p) mp[p] = -1;
  else mp[p] = 1;

  if(mp[p] == 1 && mp[p-1] == -1) return p;
  else if(mp[p] == -1 && mp[p+1] == 1) return p+1;
  else if(mp[p] == 1){
    return bsrc(a,p);
  }
  else if(mp[p] == -1){
    return bsrc(p,b);
  }
}

//==========================================================
int main(){
  cin >> N >> A >> B;
  for(int i=0;i<N;i++) cin >> h[i];
  sort(h,h+N);
  ll tmp = h[N-1] / B + 1;

  mp[0] = -1;
  mp[tmp] = 1;

  cout << bsrc(0,tmp) << endl;
  return 0;
}
