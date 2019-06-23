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
  int a[N],b[N],c[N];
  for(int i=0;i<N;i++) cin >> a[i];
  for(int i=0;i<N;i++) cin >> b[i];
  for(int i=0;i<N;i++) cin >> c[i];

  sort(a,a+N);
  sort(b,b+N);
  sort(c,c+N);

  ll ans = 0LL;
  for(int i=0;i<N;i++){
    int x = b[i];
    ll cnta = lower_bound(a,a+N,x) - a;
    ll cntc = N - (upper_bound(c,c+N,x) - c);
    ans += cnta * cntc;
  }

  cout << ans << endl;
  return 0;
}
