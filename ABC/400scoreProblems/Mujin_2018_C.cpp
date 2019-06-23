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
  int N,M;
  cin >> N >> M;
  char s[N][M];
  for(int i=0;i<N;i++){
    for(int j=0;j<M;j++) cin >> s[i][j];
  }

  int l[N][M];
  for(int i=0;i<N;i++){
    int cnt = 0;
    for(int j=0;j<M;j++){
      if(s[i][j] == '.') cnt++;
      else cnt = 0;
      l[i][j] = max(0, cnt - 1);
      //cout << l[i][j] ;
    }
    //cout << endl;
  }

  int r[N][M];
  for(int i=0;i<N;i++){
    int cnt = 0;
    for(int j=M-1;j>=0;j--){
      if(s[i][j] == '.') cnt++;
      else cnt = 0;
      r[i][j] = max(0, cnt - 1);
      //cout << r[i][j];
    }
    //cout << endl;
  }

  int u[N][M];
  for(int j=0;j<M;j++){
    int cnt = 0;
    for(int i=0;i<N;i++){
      if(s[i][j] == '.') cnt++;
      else cnt = 0;
      u[i][j] = max(0, cnt - 1);
      //cout << u[i][j];
    }
    //cout << endl;
  }

  int d[N][M];
  for(int j=0;j<M;j++){
    int cnt = 0;
    for(int i=N-1;i>=0;i--){
      if(s[i][j] == '.') cnt++;
      else cnt = 0;
      d[i][j] = max(0, cnt - 1);
      //cout << u[i][j];
    }
    //cout << endl;
  }

  //---------------------------------
  ll ans = 0LL;
  for(int i=0;i<N;i++){
    for(int j=0;j<M;j++){
      //cout << ans << endl;
      if(s[i][j] == '.'){
        ans += l[i][j] * d[i][j];
        ans += d[i][j] * r[i][j];
        ans += r[i][j] * u[i][j];
        ans += u[i][j] * l[i][j];
        /*cout << l[i][j] << endl;
        cout << d[i][j] << endl;
        cout << r[i][j] << endl;
        cout << u[i][j] << endl << endl;*/
      }
    }
  }

  cout << ans << endl;
  return 0;
}
