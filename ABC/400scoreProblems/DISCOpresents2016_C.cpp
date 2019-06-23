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

ll gcd(ll a, ll b){
  if(b == 0LL) return a;
  return gcd(b, a % b);
}

//=================================
int main(){
  int N;
  ll K;
  cin >> N >> K;
  ll a[N];
  for(int i=0;i<N;i++) cin >> a[i];

  map<ll, ll> mp;
  for(int i=0;i<N;i++){
    ll tmp = gcd(a[i], K);
    mp[tmp]++;
  }

  ll ans = 0LL;
  for(auto it = mp.begin(); it != mp.end(); it++){
    for(auto it2 = it; it2 != mp.end(); it2++){
      if((it->first * it2->first) % K == 0){
        if(it == it2){
          ans += it->second * (it->second - 1) / 2;
        }
        else {
          ans += it->second * it2->second;
        }
      }
    }
  }

  cout << ans << endl;
  return 0;
}
