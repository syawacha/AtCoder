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
  int a[5];
  for(int i=0;i<5;i++) cin >> a[i];
  int b[5];
  for(int i=0;i<5;i++){
    b[i] = 10 - a[i] % 10;
    if(b[i] == 10) b[i] = 0;
  }

  int mx = *max_element(b,b+5);

  int ans = 0;
  for(int i=0;i<5;i++){
    ans += a[i] + b[i];
  }

  ans -= mx;

  cout << ans << endl;
  return 0;


}
