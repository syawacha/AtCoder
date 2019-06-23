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
  int N,M,X,Y;
  cin >> N >> M >> X >> Y;
  int x[N],y[M];
  for(int i=0;i<N;i++) cin >> x[i];
  for(int i=0;i<M;i++) cin >> y[i];

  sort(x,x+N);
  sort(y,y+M);

  if(x[N-1]<y[0]){
    if(y[0]<=X || x[N-1]>=Y){
      cout << "War" << endl;
    }else{
      cout << "No War" << endl;
    }
  }else{
    cout << "War" << endl;
  }
  return 0;
}
