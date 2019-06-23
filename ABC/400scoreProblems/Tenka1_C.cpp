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
  ll a[N];
  for(int i=0;i<N;i++) cin >> a[i];
  sort(a,a+N);

  if(N % 2 == 0){
    ll ans = 0LL;
    int l = 0;
    int r = N - 1;
    while(l < N / 2 - 1){
      ans += a[r] - a[l];
      ans += a[r - 1] - a[l];
      l++;
      r--;
    }
    ans += a[N - 1] - a[N / 2 - 1];
    cout << ans << endl;
  }
  else{
    ll ans = 0LL;
    for(int i=0;i<N/2;i++){
      ans += 2 * (i + 1) * (a[i+1] - a[i]);
      ans += 2 * (i + 1) * (a[N-1-i] - a[N-1-i-1]);
    }

    int b = min(a[N/2] - a[N/2-1] , a[N/2+1] - a[N/2]);
    ans -= b;

    cout << ans << endl;
  }

  return 0;
}
