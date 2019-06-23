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
  int N,K;
  cin >> N >> K;
  int a[N];
  for(int i=0;i<N;i++) cin >> a[i];

  ll sum[N+1];
  sum[0] = 0;
  for(int i=1;i<=N;i++) sum[i] = sum[i-1] + a[i-1];

  ll ans = 0LL;
  for(int s=0;s+K<=N;s++){
    ans += sum[s+K] - sum[s];
  }

  cout << ans << endl;
  return 0;  
}
