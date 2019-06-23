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
  int N;
  cin >> N;
  int t[N];
  for(int i=0;i<N;i++) cin >> t[i];
  int M;
  cin >> M;
  int p[M],x[M];
  for(int i=0;i<M;i++){
     cin >> p[i] >> x[i];
     p[i]--;
  }

  for(int i=0;i<M;i++){
    int ans = 0;
    for(int j=0;j<N;j++){
      if(j == p[i]) ans += x[i];
      else ans += t[j];
    }
    cout << ans << endl;
  }

  return 0;
}
