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
  int N,C;
  cin >> N >> C;
  int D[C+1][C+1];
  for(int i=1;i<=C;i++){
    for(int j=1;j<=C;j++) cin >> D[i][j];
  }

  int cnt[3][C+1];
  fill(cnt[0], cnt[3], 0);
  for(int i=1;i<=N;i++){
    for(int j=1;j<=N;j++){
      int k = (i + j) % 3;
      int c;
      cin >> c;
      cnt[k][c]++;
    }
  }

  /*for(int i=0;i<3;i++){
    for(int j=1;j<=C;j++){
      printf("cnt[%d][%d] = %d \n",i,j,cnt[i][j]);
    }
  }*/

  ll ans = 100000000000000LL;
  for(int i=1;i<=C;i++){
    for(int j=1;j<=C;j++){
      for(int k=1;k<=C;k++){
        if(i == j || j == k || k == i) continue;

        ll tmp = 0LL;
        for(int l=1;l<=C;l++) tmp += cnt[0][l] * D[l][i];
        for(int l=1;l<=C;l++) tmp += cnt[1][l] * D[l][j];
        for(int l=1;l<=C;l++) tmp += cnt[2][l] * D[l][k];

        ans = min(ans, tmp);
      }
    }
  }

  cout << ans << endl;
  return 0;
}
