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
  int a[N];
  bool exist0 = false;
  for(int i=0;i<N;i++){
    cin >> a[i];
    if(a[i]==0) exist0 = true;
  }
  //例外
  if(exist0){
    cout << N << endl;
    return 0;
  }

  int s = 0, t = 0;
  ll sum = 1;
  int ans = 0;
  while(true){
    if(t==N) break;

    if(sum * a[t] <= K){
      sum *= a[t];
      t++;
      ans = max(ans,t-s);
    }
    else {
      if(s==t){
        s++;
        t++;
      }
      else{
        sum /= a[s];
        s++;
      }
    }
  }

  cout << ans << endl;
  return 0;
}
