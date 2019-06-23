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
  ll A,B;
  cin >> N >> A >> B;
  ll x[N];
  for(int i=0;i<N;i++) cin >> x[i];

  ll ans = 0LL;
  for(int i=0;i<N-1;i++){
    ll dist = x[i+1] - x[i];
    ans += min(dist*A , B);
  }

  cout << ans << endl;
  return 0;
}
