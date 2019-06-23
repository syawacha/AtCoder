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


int main(){
  ll a, b, c, d;
  cin >> a >> b >> c >> d;

  ll g = gcd(c, d);
  ll l = c * d / g;

  ll ans = b - a + 1;
  ans -= b / c;
  ans += (a - 1) / c;
  ans -= b / d;
  ans += (a - 1) / d;
  ans += b / l;
  ans -= (a - 1) / l;

  cout << ans << endl;
  return 0;
}
