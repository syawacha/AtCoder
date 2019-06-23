#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
typedef long long ll;

int main(){
  int N;
  ll K;
  cin >> N >> K;

  ll ktemp=K;
  int k[40]={};
  for(int i=39;i>=0;i--){
    if(ktemp>=(1LL << i)){
      ktemp=ktemp-(1LL << i);
      k[i]=1;
    }
  }

  int cnt[40]={};
  for(int i=0;i<N;i++){
    ll a;
    cin >> a;
    for(int j=39;j>=0;j--){
      if(a>=(1LL << j)){
        a=a-(1LL << j);
        cnt[j]++;
      }
    }
  }

  //for(int i=0;i<40;i++) printf("k[%2d]=%d\n",i,k[i]);
  //for(int i=0;i<40;i++) printf("cnt[%d]=%d\n",i,cnt[i]);



  ll ans=0LL;
  //X=Kを探索
  for(int i=0;i<40;i++){
    if(k[i]==1) ans+=(N-cnt[i])*(1LL << i);
    else ans+=cnt[i]*(1LL << i);
  }

  /*for(int i=39;i>=0;i--) cout << k[i];
  cout << endl;*/

  //X<Kを探索
  for(int i=39;i>=0;i--){
    if(k[i]==1){
      int x[40];
      for(int j=39;j>i;j--){
        x[j]=k[j];
      }
      x[i]=0;
      for(int j=0;j<i;j++){
        if(cnt[j]>N-cnt[j]) x[j]=0;
        else x[j]=1;
      }

      /*for(int j=39;j>=0;j--) cout << x[j];
      cout << endl;*/

      ll temp=0LL;
      for(int j=0;j<40;j++){
        if(x[j]==1) temp+=(N-cnt[j])*(1LL << j);
        else temp+=cnt[j]*(1LL << j);
      }

      ans=max(ans,temp);
    }
  }
  cout << ans << endl;
  return 0;
}
