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

//==================================================
int main(){
  int N,M;
  cin >> N >> M;

  int K[N];
  vector<int> use;
  vector<int> L[N];
  for(int i=0;i<N;i++){
    cin >> K[i];
    for(int j=0;j<K[i];j++){
      int l;
      cin >> l;
      use.push_back(l - 1);
      L[i].push_back(l-1);
    }
  }


  UnionFind uf = UnionFind(M);
  uf.init();
  for(int i=0;i<N;i++){
    for(int j=0;j<L[i].size()-1;j++){
      uf.unite(L[i][j], L[i][j+1]);
    }
  }

  bool isok = true;
  for(int i=1;i<use.size();i++){
    if(!uf.same(use[i], use[i-1])){
      isok = false;
      break;
    }
  }

  if(isok) cout << "YES" << endl;
  else cout << "NO" << endl;
  return 0;
}
