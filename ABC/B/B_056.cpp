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
  int W,a,b;
  cin >> W >> a >> b;

  int ans;
  if(b+W < a) ans = a - b - W;
  if(b+W >= a && b <= a+W) ans = 0;
  if(a+W < b) ans = b - a - W;

  cout << ans << endl;
  return 0;
}
