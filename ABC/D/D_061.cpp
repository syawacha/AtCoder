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
typedef pair<int,ll> P;
ll inf = 1000000000000000000;

struct edge{
  int s,t;
  ll cost;
};

int main(){
  int N,M;
  cin >> N >> M;
  edge e[M];
  for(int i=0;i<M;i++){
    cin >> e[i].s >> e[i].t >> e[i].cost;
    e[i].s--; e[i].t--;
    e[i].cost *= -1;
  }

  ll d[N]; //d[i]: 0からiまでの最短距離
  fill(d,d+N,inf);
  d[0] = 0;

  //n-1回ループ　負の閉路が無ければ更新が終わる
  for(int i=0;i<N-1;i++){
    for(int j=0;j<M;j++){
      if(d[e[j].s] != inf && d[e[j].t] > d[e[j].s] + e[j].cost){
        d[e[j].t] = d[e[j].s] + e[j].cost;
      }
    }
  }

  //さらにn回ループ　ここで更新がある点はいくらでも小さくなる
  bool neg[N];
  fill(neg,neg+N,false);
  for(int i=0;i<N;i++){
    for(int j=0;j<M;j++){
      if(d[e[j].s] != inf && d[e[j].t] > d[e[j].s] + e[j].cost){
        d[e[j].t] = d[e[j].s] + e[j].cost;
        neg[e[j].t] = true;
      }
    }
  }

  if(neg[N-1]) cout << "inf" << endl;
  else cout << -d[N-1] << endl;
  return 0;
}
