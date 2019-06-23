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
  ll N,M;
  cin >> N >> M;
  ll ans = 0LL;
  ll tmp = min(N,M/2);
  ans += tmp;
  N -= tmp;
  M -= 2 * tmp;

  if(N == 0 && M >= 4){
    ans += M / 4;
  }

  cout << ans << endl;
  return 0;
}
