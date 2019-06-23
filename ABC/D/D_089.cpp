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
  int H,W,D;
  cin >> H >> W >> D;
  int X = H*W;
  pair<int,int> pos[X+1];
  for(int i=1;i<=H;i++){
    for(int j=1;j<=W;j++){
      int tmp;
      cin >> tmp;
      pos[tmp] = make_pair(i,j);
    }
  }

  //累積和
  int sum[X+1];
  for(int i=X;i>=1;i--){
    if(i+D > X){
      sum[i] = 0;
    }else{
      sum[i] = sum[i+D];
      sum[i] += abs(pos[i+D].first - pos[i].first);
      sum[i] += abs(pos[i+D].second - pos[i].second);
    }
  }

  int Q;
  cin >> Q;
  int L[Q],R[Q];
  for(int i=0;i<Q;i++) cin >> L[i] >> R[i];
  for(int i=0;i<Q;i++) cout << sum[L[i]] - sum[R[i]] << endl;
  return 0;
}
