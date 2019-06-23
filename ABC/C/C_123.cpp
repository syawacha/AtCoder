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
  ll N;
  cin >> N;
  ll a[5];
  for(int i=0;i<5;i++) cin >> a[i];

  ll mn = *min_element(a,a+5);
  ll ans = (N + mn - 1) / mn;
  ans += 4;

  cout << ans << endl;
  return 0;
}
