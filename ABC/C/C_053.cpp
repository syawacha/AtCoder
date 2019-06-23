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
  ll x;
  cin >> x;

  ll ans = 0LL;
  ans += x / 11 ;
  ans *= 2;
  x -= (x / 11) * 11;
  if(0 < x && x <= 6){
    ans += 1;
  }
  else if(7 <= x){
    ans += 2;
  }

  cout << ans << endl;
  return 0;
}
