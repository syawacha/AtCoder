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

int keta(ll x){
  int ans = 0;
  while(x > 0){
    x /= 10;
    ans++;
  }
  return ans;
}

int main(){
  ll N;
  cin >> N;
  //cout << keta(N) << endl;

  int ans = 100;
  for(ll i=1 ; i*i<=N ; i++){
    if(N%i == 0){
      int a = keta(i);
      int b = keta(N/i);
      ans = min(ans, max(a,b));
    }
  }

  cout << ans << endl;
  return 0;
}
