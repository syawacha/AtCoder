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
  int n;
  cin >> n;

  int ans = 100000000;
  for(int i=1;i<=n;i++){
    int res = 0;
    int e = n / i;
    res = abs(i - e);
    res += n - i * e;
    ans = min(ans , res);
  }

  cout << ans << endl;
  return 0;
  
}
