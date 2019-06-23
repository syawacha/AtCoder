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

struct edge{
  int s,t,c;
};

int main(){
  int L;
  cin >> L;

  //L=2からスタート
  //必要な操作を求める 0:1足す　1:2倍
  vector<int> ope;
  while(L > 2){
    if(L%2==1){
      ope.push_back(0);
      L--;
    } else {
      ope.push_back(1);
      L /= 2;
    }
  }
  reverse(ope.begin(),ope.end());

  /*for(int i=0;i<ope.size();i++){
    cout << ope[i] << endl;
  }*/

  int N = 2;
  int M = 2;
  vector<edge> e;
  edge e1,e2;
  e1.s = 1; e1.t = 2; e1.c = 0;
  e2.s = 1; e2.t = 2; e2.c = 1;
  e.push_back(e1);
  e.push_back(e2);

  for(int i=0;i<(int)ope.size();i++){
    if(ope[i] == 0){
      edge tmp;
      tmp.s = 1; tmp.t = N; tmp.c = L;
      e.push_back(tmp);
      M++;
      L++;
    }

    if(ope[i] == 1){
      for(int j=0;j<(int)e.size();j++) e[j].c *= 2;
      edge tmp1,tmp2;
      tmp1.s = N; tmp1.t = N+1; tmp1.c = 0;
      tmp2.s = N; tmp2.t = N+1; tmp2.c = 1;
      e.push_back(tmp1);
      e.push_back(tmp2);
      N++;
      M += 2;
      L *= 2;
    }
  }

  cout << N << " " << M << endl;
  for(int i=0;i<(int)e.size();i++){
    cout << e[i].s << " " << e[i].t << " " << e[i].c << endl;
  }
  return 0;
}
