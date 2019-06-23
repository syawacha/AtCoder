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
#define INF 1000000000;

int main(){
  int N, K;
  cin >> N >> K;
  vector<int> xm,xp;
  for(int i=0;i<N;i++){
    int temp;
    cin >> temp;
    if(temp<0){
      xm.push_back(-temp);
    }else if(temp>0){
      xp.push_back(temp);
    }else{
      K--;
    }
  }
  reverse(xm.begin(),xm.end());
  /*for(auto itr = xm.begin(); itr!=xm.end(); itr++){
    cout << *itr << " ";
  }
  cout << endl;
  for(auto itr = xp.begin(); itr!=xp.end(); itr++){
    cout << *itr << " ";
  }
  cout << endl;*/

  if(xm.size()==0 && xp.size()==0){
    cout << 0 << endl;
    return 0;
  }


  int ans = INF;
  //右にのみ
  if(xp.size()>=K){
    ans = min(ans, xp[K-1]);
  }
  //左のみ
  if(xm.size()>=K){
    ans = min(ans, xm[K-1]);
  }

  //みぎから左
  for(int i=1;i<=K-1;i++){
    if(xp.size()>=i && xm.size()>=K-i){
      ans = min(ans, 2*xp[i-1]+xm[K-i-1]);
    }
  }
  //左から右
  for(int i=1;i<=K-1;i++){
    if(xm.size()>=i && xp.size()>=K-i){
      ans = min(ans, 2*xm[i-1]+xp[K-i-1]);
    }
  }

  cout << ans << endl;
  return 0;
}
