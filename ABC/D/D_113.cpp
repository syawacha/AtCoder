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

#define N 1000000007LL;

int H,W,K;

ll amida10(int onbit){
  ll ans=0;
  for(int i=0 ; i < (1 << (W-1)) ; i++){
    if(i & (1<<onbit)){
      bool isok=true;
      for(int j=0;j<=W-3;j++){
        if((i & (1<<j)) && (i & (1<<(j+1))) ) isok=false;
      }
      if(isok) {
        ans++;
      }
    }
  }
  return ans;
}

ll amida01(int offbit){
  ll ans=0;
  for(int i=0 ; i < (1 << (W-1)) ; i++){
    if(!(i & (1<<offbit))){
      bool isok=true;
      for(int j=0;j<=W-3;j++){
        if((i & (1<<j)) && (i & (1<<(j+1))) ) isok=false;
      }
      if(isok) ans++;
    }
  }
  return ans;
}

ll amida02(int offbit){
  ll ans=0;
  for(int i=0 ; i < (1 << (W-1)) ; i++){
    if(!(i & (1<<offbit)) && !(i & (1<<(offbit+1)))){
      bool isok=true;
      for(int j=0;j<=W-3;j++){
        if((i & (1<<j)) && (i & (1<<(j+1))) ) isok=false;
      }
      if(isok) {
        ans++;
      }
    }
  }
  return ans;
}

int main(){
  cin >> H >> W >> K;
  ll dp[H+1][W+1];

  if(W==1){
    cout << 1LL << endl;
    return 0;
  }

  dp[1][1]=amida01(0);
  dp[1][2]=amida10(0);
  for(int j=3;j<=W;j++) dp[1][j]=0LL;

  for(int i=2;i<=H;i++){
    for(int j=1;j<=W;j++){
      if(j==1){
        dp[i][j]=(dp[i-1][j]*amida01(0) + dp[i-1][j+1]*amida10(0))%N;
      }else if(j==W){
        dp[i][j]=(dp[i-1][j-1]*amida10(j-2) + dp[i-1][j]*amida01(j-2))%N;
      }else{
        dp[i][j]=(dp[i-1][j-1]*amida10(j-2) + dp[i-1][j]*amida02(j-2)+dp[i-1][j+1]*amida10(j-1))%N;
      }
    }
  }

  cout << dp[H][K] << endl;
  return 0;
}
