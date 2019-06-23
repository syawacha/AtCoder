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
typedef unsigned int uint;
using namespace std;

int main(){
  ll a,b,x;
  cin >> a >> b >> x;

  ll s;
  if(a==0) s = 0;
  else s = (a - 1) / x + 1;

  ll t = b / x + 1;

  cout << t - s << endl;
  return 0;
}
