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

int N;
int K;
vector<P> p[100000];
ll cost[100000];//Kまでの最短経路長
bool vtd[100000];

void dfs(int n){
  //cout << n+1 << endl;
  vtd[n] = true;
  for(int i=0;i<(int)p[n].size();i++){
    if(!vtd[p[n][i].first]){
      cost[p[n][i].first] = cost[n] + p[n][i].second;
      dfs(p[n][i].first);
    }
  }
  return;
}


int main(){
  cin >> N;
  for(int i=0;i<N-1;i++){
    int a,b;
    ll c;
    cin >> a >> b >> c;
    a--; b--;
    p[a].push_back(P(b,c));
    p[b].push_back(P(a,c));
  }

  int Q;
  cin >> Q >> K;
  int x[Q],y[Q];
  for(int i=0;i<Q;i++){
    cin >> x[i] >> y[i];
    x[i]--; y[i]--;
  }

  fill(vtd,vtd+100000,false);
  cost[K-1] = 0;
  dfs(K-1);

  for(int i=0;i<Q;i++){
    cout << cost[x[i]] + cost[y[i]] << endl;
  }

  return 0;
}
