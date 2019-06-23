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
  int a,b,c,d;
  cin >> a >> b >> c >> d;

  int ans;
  if(c < a){
    ans = max(0,d-a);
    ans = min(ans,b-a);
  }
  else if(a <= c && c < b){
    ans = min(b-c , d-c);
  }
  else if(b <= c){
    ans = 0;
  }

  cout << ans << endl;
  return 0;
}
