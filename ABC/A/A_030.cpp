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
  double a,b,c,d;
  double e,f;
  cin >> a >> b >> c >> d;
  e = b/a;
  f = d/c;

  if(e > f) cout << "TAKAHASHI" << endl;
  else if(f > e) cout << "AOKI" << endl;
  else cout << "DRAW" << endl;

  return 0;
}
