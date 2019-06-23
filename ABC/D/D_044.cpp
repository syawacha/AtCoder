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

ll f(ll b, ll n){
  if(n < b) return n;
  else {
    return f(b, n/b) + n % b;
  }
}

int main(){
  ll n, s;
  cin >> n >> s;

  if(s == n){
    cout << n + 1 << endl;
    return 0;
  }

  // 2<=b<=√n
  for(ll b=2;b*b<=n;b++){
    if(f(b,n) == s){
      cout << b << endl;
      return 0;
    }
  }

  ll ans = 10000000000000LL;
  //√n<b
  for(ll p=1;p*p<n;p++){
    if((n-s+p)%p!=0) continue;
    ll b = (n - s + p) / p;
    if(b < 2) continue;
    if(f(b,n) == s){
      ans = min(ans,b);
    }
  }

  if(ans != 10000000000000LL) cout << ans << endl;
  else cout << -1 << endl;
  return 0;
}
