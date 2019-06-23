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
  int N;
  cin >> N;
  int a[N];
  for(int i=0;i<N;i++) cin >> a[i];

  int t = 1;
  ll ans = 1LL;
  for(int i=1;i<N;i++){
    if(a[i-1] < a[i]){
      ans += t + 1;
      t++;
    } else {
      ans += 1;
      t = 1;
    }
  }

  cout << ans << endl;
  return 0;
}
