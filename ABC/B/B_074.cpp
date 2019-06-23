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
typedef unsigned int uint;
using namespace std;

int main(){
  int N,K;
  cin >> N >> K;
  int x[N];
  for(int i=0;i<N;i++) cin >> x[i];

  int ans = 0;
  for(int i=0;i<N;i++){
    int dist = min(x[i] , K-x[i]);
    ans += dist * 2;
  }

  cout << ans << endl;
  return 0;
}
