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

class UnionFind{
public:
  vector<int> par;
  vector<int> rank;
  vector<int> sz;
  int N;

  UnionFind(int n){N=n;}

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

//-------------------------------------------------
int main(){
  int N,M;
  cin >> N >> M;
  int a[M],b[M];
  for(int i=0;i<M;i++){
    cin >> a[i] >> b[i];
    a[i]--;
    b[i]--;
  }

  int cnt=0;
  for(int i=0;i<M;i++){
    UnionFind uf = UnionFind(N);
    uf.init();
    for(int j=0;j<M;j++){
      if(j!=i){
        uf.unite(a[j],b[j]);
      }
    }
    if(!uf.same(a[i],b[i])) cnt++;
  }

  cout << cnt << endl;
  return 0;
}
