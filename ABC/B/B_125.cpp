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
  int V[N], C[N];
  for(int i=0;i<N;i++) cin >> V[i];
  for(int i=0;i<N;i++) cin >> C[i];

  ll ans = 0LL;
  for(int i=0;i<N;i++){
    if(V[i] >= C[i]){
      ans += V[i] - C[i];
    }
  }

  cout << ans << endl;
  return 0;

}
