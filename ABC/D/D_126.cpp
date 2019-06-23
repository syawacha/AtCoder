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

struct edge{
  int to, cost;
};

vector<edge> G[100001];
bool visited[100001];
int color[100001];

void dfs(int n){
  //cout << n << endl;
  visited[n] = true;
  //cout << " b" << endl;
  for(int i = 0; i < G[n].size(); i++){
    int nxt = G[n][i].to;
    int cst = G[n][i].cost;
    if(!visited[nxt]){
      if(cst % 2 == 0){
        color[nxt] = color[n];
      } else {
        if(color[n] == 0) color[nxt] = 1;
        else color[nxt] = 0;
      }
      //cout << " a" << endl;
      dfs(nxt);
    }
  }
  return;
}

int main(){
  int N;
  cin >> N;
  for(int i = 0; i < N - 1; i++){
    int u, v, w;
    cin >> u >> v >> w;
    u--;
    v--;
    G[u].push_back(edge{v, w});
    G[v].push_back(edge{u, w});
  }

  fill(visited, visited + 100001, false);
  color[0] = 0;
  dfs(0);

  for(int i = 0; i < N; i++){
    cout << color[i] << endl;
  }

  return 0;
}
