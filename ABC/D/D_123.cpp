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
  int x,y,z,K;
  cin >> x >> y >> z >> K;
  ll a[x],b[y],c[z];
  for(int i=0;i<x;i++) cin >> a[i];
  for(int i=0;i<y;i++) cin >> b[i];
  for(int i=0;i<z;i++) cin >> c[i];

  sort(a,a+x);
  sort(b,b+y);
  sort(c,c+z);
  reverse(a,a+x);
  reverse(b,b+y);
  reverse(c,c+z);

  priority_queue<ll> que;
  for(int i=0;i<x;i++){
    if(i+1 > K) break;
    for(int j=0;j<y;j++){
      if((i+1)*(j+1) > K) break;
      for(int k=0;k<z;k++){
        if((i+1)*(j+1)*(k+1) > K) break;

        que.push(a[i] + b[j] + c[k]);
      }
    }
  }

  for(int i=0;i<K;i++){
    cout << que.top() << endl;
    que.pop();
  }

  return 0;
}
