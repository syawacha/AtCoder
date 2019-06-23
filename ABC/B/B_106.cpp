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
  int N;
  cin >> N;
  int ans;
  if(N<105) ans=0;
  if(N>=105 && N<135) ans = 1;
  if(N>=135 && N<165) ans = 2;
  if(N>=165 && N<189) ans = 3;
  if(N>=189 && N<195) ans = 4;
  if(N>=195) ans = 5;
  cout << ans << endl;
  return 0;
}
