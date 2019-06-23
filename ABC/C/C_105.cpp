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
  ll N;
  cin >> N;
  ll beki[35];
  beki[0]=1;
  for(int i=1;i<35;i++){
    beki[i]=-2LL*beki[i-1];
  }
  int bit[35];
  fill(bit,bit+35,-1);
  bit[0]=0;
  for(int i=0;i<34;i++){
    if(N==0LL) break;
    if(N%beki[i+1]!=0){
      bit[i]=1;
      N-=beki[i];
    }else{
      bit[i]=0;
    }
  }

  for(int i=34;i>=0;i--){
    if(bit[i]!=-1){
      cout << bit[i];
    }
  }
  cout << endl;
  return 0;
}
