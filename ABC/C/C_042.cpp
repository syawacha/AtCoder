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

/*int keta(int N){
  int ans = 0;
  while(N>0){
    ans++;
    N /= 10;
  }
  return ans;
}*/

int main(){
  int N,K;
  cin >> N >> K;
  bool abl[10];
  fill(abl,abl+10,true);
  for(int i=0;i<K;i++){
    int k;
    cin >> k;
    abl[k] = false;
  }

  int ans;
  for(int i=N;i<=99999;i++){
    int itmp = i;
    bool isok = true;
    while(itmp != 0){
      if(abl[itmp%10]==false){
        isok = false;
        break;
      }
      itmp/=10;
    }
    if(isok){
      ans = i;
      break;
    }
  }

  //cout << n << endl;
  cout << ans << endl;
  return 0;
}
