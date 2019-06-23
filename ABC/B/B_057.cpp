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
  int N,M;
  cin >> N >> M;
  int a[N],b[N],c[M],d[M];
  for(int i=0;i<N;i++) cin >> a[i] >> b[i];
  for(int i=0;i<M;i++) cin >> c[i] >> d[i];

  for(int i=0;i<N;i++){
    int mn = 1000000000;
    int ans;
    for(int j=0;j<M;j++){
      int dist = abs(a[i]-c[j]) + abs(b[i]-d[j]);
      if(dist < mn){
        mn = dist;
        ans = j + 1;
      }
    }
    cout << ans << endl;
  }

  return 0;
}
