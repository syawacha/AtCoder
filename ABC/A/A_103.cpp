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
  int a[3];
  cin >> a[0] >> a[1] >> a[2];
  sort(a,a+3);

  int ans=0;
  ans+=abs(a[2]-a[1]);
  ans+=abs(a[1]-a[0]);

  cout << ans << endl;
  return 0;
}
