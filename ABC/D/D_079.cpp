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
int INF = 1000000007;

int main(){
  int H,W;
  cin >> H >> W;
  int d[10][10];
  for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
      cin >> d[i][j];
    }
  }
  int A[H][W];
  for(int i=0;i<H;i++){
    for(int j=0;j<W;j++) cin >> A[i][j];
  }
  //ワーシャルフロイド
  for(int k=0;k<10;k++){
    for(int i=0;i<10;i++){
      for(int j=0;j<10;j++){
        d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
      }
    }
  }


  ll ans = 0LL;
  for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
      if(A[i][j]!=-1){
        ans += d[A[i][j]][1];
      }
    }
  }

  cout << ans << endl;
  return 0;
}
