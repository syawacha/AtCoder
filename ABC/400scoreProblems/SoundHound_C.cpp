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

class UnionFind{
public:
  vector<int> par;
  vector<int> rank;
  vector<int> sz;
  int N;

  UnionFind(int n){N = n;}

  //初期化
  void init(){
    for(int i=0;i<N;i++){
      par.push_back(i);
      rank.push_back(0);
      sz.push_back(1);
    }
  }

  //木の根を求める
  int find(int x){
    if(par[x]==x) return x;
    else{
      par[x]=find(par[x]);
      return par[x];
    }
  }

  //xとyの集合の併合
  void unite(int x, int y){
    x=find(x);
    y=find(y);
    if(x == y) return;

    if(rank[x] < rank[y]){
      par[x] = y;
      sz[y] += sz[x];
    }else{
      par[y] = x;
      sz[x] += sz[y];
      if(rank[x] == rank[y]) rank[x]++;
    }
  }

  //x,yが同じ集合にあるか
  bool same(int x, int y){
    return find(x) == find(y);
  }

  //xの木のサイズ
  int size(int x){
    return sz[find(x)];
  }
};

//=============================================
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
int main(){
  int R, C;
  cin >> R >> C;
  int N = R * C;
  char S[R][C];
  for(int i = 0; i < R; i++){
    for(int j = 0; j < C; j++) cin >> S[i][j];
  }

  UnionFind uf = UnionFind(N);
  uf.init();
  vector<int> G[N];
  for(int i = 0; i < R; i++){
    for(int j = 0; j < C; j++){
      //cout << "a" << endl;
      if(S[i][j] == '.'){
        for(int k = 0; k < 4; k++){
          int nx = i + dx[k];
          int ny = j + dy[k];
          if(0 <= nx && nx < R && 0 <= ny && ny < C && S[nx][ny] == '.'){
            uf.unite(i * C + j, nx * C + ny);
            G[i * C + j].push_back(nx * C + ny);
          }
        }
      }
    }
  }

  //探索すべき親
  vector<int> obj;
  bool ispar[N];
  fill(ispar, ispar + N, false);
  for(int i = 0; i < R; i++){
    for(int j = 0; j < C; j++){
      ispar[uf.find(i * C + j)] = true;
    }
  }
  for(int i = 0; i < N; i++){
    if(ispar[i] && S[i / C][i % C] == '.'){
      obj.push_back(i);
      cout << i << endl;
    }
  }

  bool adv[N];
  bool vsd[N];
  int ans = 0;
  for(int i = 0; i < obj.size(); i++){
    int ans1 = 0, ans2 = 0;
    fill(adv, adv + N, false);
    fill(vsd, vsd + N, false);
    //dfs------------------------------------
    adv[obj[i]] = true;
    stack<int> st;
    st.push(obj[i]);
    while(st.size()){
      int p = st.top();
      st.pop();
      vsd[p] = true;
      for(int j = 0; j < G[p].size(); j++){
        int to = G[p][j];
        //cout << "p=" << p << " to=" << to << endl;
        if(!vsd[to]){
          adv[to] = !adv[p];
          st.push(to);
        }
      }
    }

    for(int j = 0; j < N; j++){
      if(adv[j]) ans1++;
    }
    //---------------------------------------
    fill(adv, adv + N, false);
    fill(vsd, vsd + N, false);
    //dfs------------------------------------
    adv[obj[i]] = false;
    st.push(obj[i]);
    while(st.size()){
      int p = st.top();
      st.pop();
      vsd[p] = true;
      for(int j = 0; j < G[p].size(); j++){
        int to = G[p][j];
        if(!vsd[to]){
          adv[to] = !adv[p];
          st.push(to);
        }
      }
    }

    for(int j = 0; j < N; j++){
      if(adv[j]) ans2++;
    }
    //---------------------------------------
    //cout << ans1 << ans2 << endl;
    ans += max(ans1, ans2);
  }

  cout << ans << endl;
  return 0;
}
