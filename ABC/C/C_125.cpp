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

priority_queue<ll> PrimeFact(ll N){
  priority_queue<ll> que;

  while(1){
    bool isPrime = true;
    for(ll i = 2LL ; i*i <= N ; i++){
      if(N % i == 0LL){
        que.push(i);
        N /= i;
        isPrime = false;
        break;
      }
    }
    if(isPrime){
      que.push(N);
      break;
    }
  }

  return que;
}

//========================================
int main(){
  int N;
  cin >> N;
  ll a[N];
  for(int i=0;i<N;i++) cin >> a[i];

  priority_queue<ll> q1 = PrimeFact(a[0]);
  priority_queue<ll> q2 = PrimeFact(a[1]);

  ll ans1 = 1;
  ll t[N];
  for(int i=0;i<N;i++) t[i] = a[i];
  bool pos_dfd = false;
  while(!q1.empty()){
    ll x = q1.top();
    q1.pop();
    int cnt = 0;
    int pos = -1;
    for(int i=0;i<N;i++){
      if(t[i] % x == 0LL) cnt++;
      else {
        if(!pos_dfd) pos = i;
      }
    }

    if(cnt == N){
      ans1 *= x;
      for(int i=0;i<N;i++) t[i] /= x;
    }
    else if(cnt == N - 1 && !pos_dfd){
      ans1 *= x;
      pos_dfd = true;
      t[pos] = a[0];
      for(int i=0;i<N;i++) t[i] /= x;
    }
  }

//-------------------------------------------
  ll ans2 = 1;
  for(int i=0;i<N;i++) t[i] = a[i];
  pos_dfd = false;
  while(!q2.empty()){
    int x = q2.top();
    q2.pop();
    int cnt = 0;
    int pos = -1;
    for(int i=0;i<N;i++){
      if(t[i] % x == 0) cnt++;
      else {
        if(!pos_dfd) pos = i;
      }
    }

    if(cnt == N){
      ans2 *= x;
      for(int i=0;i<N;i++) t[i] /= x;
    }
    else if(cnt == N - 1 && !pos_dfd){
      ans2 *= x;
      pos_dfd = true;
      t[pos] = a[1];
      for(int i=0;i<N;i++) t[i] /= x;
    }
  }

  cout << max(ans1, ans2) << endl;
}
