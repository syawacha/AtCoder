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

ll com[51][51];

void set_com_table(){
  for(int i=0;i<=50;i++){
    for(int j=0;j<=i;j++){
      if(j==0 || j==i) com[i][j] = 1LL;
      else {
        com[i][j] = com[i-1][j-1] + com[i-1][j];
      }
    }
  }
}

//========================================================

int main(){
  set_com_table();
  int N,A,B;
  cin >> N >> A >> B;
  double v[N];
  for(int i=0;i<N;i++) cin >> v[i];

  sort(v,v+N);

  double sum = 0;
  for(int i=N-A ; i<N ; i++){
    sum += v[i];
  }

  double mn = v[N-A];
  int cnt = 0; //全部の中の個数
  for(int i=0;i<N;i++){
    if(v[i] == mn) cnt++;
  }
  int cntA = 0; //A個選ぶときにmnが何個使われるか
  for(int i=N-A;i<N;i++){
    if(v[i] == mn) cntA++;
  }

  ll ans = 0LL;
  if(mn == v[N-1]){
    for(int i=A;i<=min(cnt,B);i++){
      ans += com[cnt][i];
    }
  } else {
    ans += com[cnt][cntA];
  }

  printf("%.6lf\n",sum/A);
  cout << ans << endl;
  return 0;
}
