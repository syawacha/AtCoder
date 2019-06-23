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
  int N,X;
  cin >> N >> X;
  int m[N];
  for(int i=0;i<N;i++) cin >> m[i];

  int ans = N;
  for(int i=0;i<N;i++) X -= m[i];

  int mn = *min_element(m,m+N);
  ans += X / mn;

  cout << ans << endl;
  return 0;
}
