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
  ll a,b,c;
  cin >> a >> b >> c;
  int k;
  cin >> k;

  ll m = max(a,b);
  m = max(m,c);

  for(int i=0;i<k;i++){
    m *= 2;
  }

  if(a>=b && a>=c) cout << m+b+c << endl;
  else if(b>=a && b>=c) cout << m+a+c << endl;
  else if(c>=a && c>=b) cout << a+b+m << endl;
  return 0;
}
