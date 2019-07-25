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
  ll L, R;
  cin >> L >> R;

  int ans = 100000000;
  if(L / 2019 != R / 2019){
    ans = 0;
  } else {
    for(int i = L % 2019; i < R % 2019; i++){
      for(int j = i + 1; j <= R % 2019; j++){
        ans = min(ans, (i * j) % 2019);
      }
    }
  }

  cout << ans << endl;
  return 0;
}
