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
  int N,A;
  cin >> N >> A;
  int x[N];
  for(int i=0;i<N;i++) cin >> x[i];

  vector<int> lft;
  vector<int> rit;
  int cnt0 = 0;
  for(int i=0;i<N;i++){
    if(x[i]==A) cnt0++;
    else if(x[i]>A) rit.push_back(x[i]-A);
    else if(x[i]<A) lft.push_back(A-x[i]);
  }

  ll dpr[2501] = {};
  ll dpl[2501] = {};

  for(int i=0;i<(int)rit.size();i++){
    for(int j=2500;j>=1;j--){
      if(j - rit[i] >= 1 && dpr[j-rit[i]]!=0){
        dpr[j] += dpr[j-rit[i]];
      }
    }
    dpr[rit[i]]++;
  }
  for(int i=0;i<(int)lft.size();i++){
    for(int j=2500;j>=1;j--){
      if(j - lft[i] >= 1 && dpl[j-lft[i]]!=0){
        dpl[j] += dpl[j-lft[i]];
      }
    }
    dpl[lft[i]]++;
  }

  ll ans = 0;
  for(int i=1;i<=2500;i++){
    ans += dpl[i] * dpr[i] * (1LL << cnt0);
  }
  ans += 1LL << cnt0;
  ans -= 1;

  cout << ans << endl;
  return 0;
}
