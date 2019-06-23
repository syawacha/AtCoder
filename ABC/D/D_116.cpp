#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
typedef long long ll;
typedef unsigned int uint;
#define INF 10000000000;

struct sushi{
  int t;
  ll d;
  bool selected = false;

  bool operator<(const sushi &another) const{
    return d > another.d;
  }
};
typedef struct sushi sushi;

int main(){
  int N,K;
  cin >> N >> K;
  sushi s[N];
  for(int i=0;i<N;i++){
    cin >> s[i].t >> s[i].d;
  }

  //降順ソート
  sort(s,s+N);

  vector<sushi*> set;
  //set中のネタiの個数　入力:t 出力:個数
  int num_neta[N+1]={};
  //setの中にネタはnum_kind_neta種類ある
  int num_kind_neta = 0;
  //最終的な答え
  ll ans=0;
  //setの中のおいしさの合計
  ll sum=0;

  for(int i=0;i<K;i++){
    set.push_back(&s[i]);
    s[i].selected = true;
    num_neta[s[i].t]++;
    sum+=s[i].d;
  }
  for(int i=0;i<=N;i++){
    if(num_neta[i] > 0) num_kind_neta++;
  }
  ans = num_kind_neta*num_kind_neta + sum;

  //cout << ans << "\n" << num_kind_neta << endl;


  while(1){
    //printf("(%d %d) (%d %d) (%d %d)\n",set[0]->t,set[0]->d,set[1]->t,set[1]->d,set[2]->t,set[2]->d);

    //取り除く寿司の決定
    int idx = -1;
    ll min_d = INF;
    for(uint i=0;i<set.size();i++){
      if(num_neta[set[i]->t] >= 2 && set[i]->d < min_d){
        idx = i;
        min_d = set[i]->d;
      }
    }
    if(idx==-1) break;
    else {
      set[idx]->selected = false;
      num_neta[set[idx]->t]--;
      sum = sum-set[idx]->d;
    }
    //printf("idx=%d\n",idx);

    //追加する寿司の決定
    ll max_d=-1;
    int idx2=-1;
    for(int i=0;i<N;i++){
      if(s[i].selected==false && num_neta[s[i].t]==0 && max_d<s[i].d){
        max_d=s[i].d;
        idx2=i;
      }
    }
    if(idx2==-1) break;
    else{
      set[idx] = &s[idx2];
      s[idx2].selected = true;
      num_neta[s[idx2].t]++;
      sum = sum + s[idx2].d;
    }
    //printf("idx2=%d\n",idx2);

    //結果を求める
    num_kind_neta++;
    //printf("sum=%d kind=%d\n",sum,num_kind_neta);
    ans=max(ans,(num_kind_neta*num_kind_neta + sum));
  }

  cout << ans << endl;
  return 0;
}
