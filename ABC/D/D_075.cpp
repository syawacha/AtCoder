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
  int N,K;
  cin >> N >> K;
  ll x[N],y[N];
  for(int i=0;i<N;i++) cin >> x[i] >> y[i];

  //左上と右下を全探索
  ll ans = 5000000000000000000;
  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      for(int k=0;k<N;k++){
        for(int l=0;l<N;l++){
          int cnt = 0;
          for(int m=0;m<N;m++){
            if(x[m]<=max(x[i],x[j]) && x[m]>=min(x[i],x[j])
                  && y[m]<=max(y[k],y[l]) && y[m]>=min(y[k],y[l])){
              cnt++;
            }
          }

          if(cnt == K){
            ans = min(ans, abs(x[i]-x[j])*abs(y[k]-y[l]));
          }
        }
      }
    }
  }

  cout << ans << endl;
  return 0;
}
