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
  int a,b;
  cin >> a >> b;
  int ans = max(a+b,a-b);
  ans = max(ans,a*b);
  cout << ans << endl;
  return 0;
}
