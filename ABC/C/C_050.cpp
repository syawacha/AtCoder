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

ll MOD = 1000000007;

int main(){
  int N;
  cin >> N;
  int A[N];
  for(int i=0;i<N;i++) cin >> A[i];

  int cnt[N] = {};
  for(int i=0;i<N;i++){
    cnt[A[i]]++;
  }

  if(N%2==0){
    bool check = true;
    for(int i=0;i<N;i++){
      if(i%2==0 && cnt[i]!=0) check = false;
      if(i%2==1 && cnt[i]!=2) check = false;
    }
    if(!check){
      cout << 0 << endl;
      return 0;
    }
  }

  if(N%2==1){
    bool check = true;
    if(cnt[0]!=1) check = false;
    for(int i=1;i<N;i++){
      if(i%2==0 && cnt[i]!=2) check = false;
      if(i%2==1 && cnt[i]!=0) check = false;
    }
    if(!check){
      cout << 0 << endl;
      return 0;
    }
  }

  //=====================================================
  //答えが存在する
  if(N%2==1){
    ll ans = 1;
    for(int i=0;i<N/2;i++){
      ans *= 2;
      ans %= MOD;
    }
    cout << ans << endl;
    return 0;
  }

  if(N%2==0){
    ll ans = 1;
    for(int i=0;i<N/2;i++){
      ans *= 2;
      ans %= MOD;
    }
    cout << ans << endl;
    return 0;
  }
}
