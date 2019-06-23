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
  int N, M;
  cin >> N >> M;
  priority_queue<ll> q;
  for(int i=0;i<N;i++){
    ll a;
    cin >> a;
    q.push(a);
  }

  /*while(!q.empty()){
    cout << q.top() << " ";
    q.pop();
  }
  cout << endl;*/

  pair<ll, ll> p[M];
  for(int i=0;i<M;i++){
    ll b,c;
    cin >> b >> c;
    p[i].first = c;
    p[i].second = b;
  }

  sort(p, p+M);
  reverse(p, p+M);
  priority_queue<ll, vector<ll>, greater<ll> > queue;
  int cnt = 0;
  for(int i=0;i<M;i++){
    if(p[i].second + cnt <= N){
      for(int j=0;j<p[i].second;j++) queue.push(p[i].first);
      cnt += p[i].second;
    }
    else if(cnt >= N) break;
    else{
      for(int j=0; j < N - cnt; j++){
        queue.push(p[i].first);
      }
      break;
    }
  }
  //cout << queue.size();
  int sz = queue.size();
  if(sz < N){
    for(int i=0;i<N - sz;i++) queue.push(-1);
  }

  /*while(!queue.empty()){
    cout << queue.top() << " ";
    queue.pop();
  }
  cout << endl;*/

  for(int i=0;i<N;i++){
    ll a = q.top();
    q.pop();
    ll b = queue.top();
    queue.pop();

    if(a > b){
      queue.push(a);
    }
    else{
      queue.push(b);
      break;
    }
  }

  ll ans = 0LL;
  for(int i=0;i<N;i++){
    int b = queue.top();
    queue.pop();
    //cout << b << endl;
    ans += b;
  }

  cout << ans << endl;
  return 0;



}
