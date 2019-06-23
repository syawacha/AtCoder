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
  int N,D,X;
  cin >> N >> D >> X;
  int a[N];
  for(int i=0;i<N;i++) cin >> a[i];

  int ans = X;
  for(int i=0;i<N;i++){
    ans += (D-1)/a[i] + 1;
  }

  cout << ans << endl;
  return 0;
}
