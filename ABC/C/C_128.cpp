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
  int k[N];
  int s[M][N+1];
  for(int i=0;i<M;i++){
    cin >> k[i];
    for(int j=0;j<k[i];j++){
      cin >> s[i][j];
      s[i][j]--;
    }
  }
  int p[M];
  for(int i=0;i<M;i++) cin >> p[i];

  int ans = 0;
  //bit全探索
  //cout << "start" << endl;
  for(int i=0; i<(1 << N); i++){
    //cout << (1 << N) << endl;
    bool use[N];
    int tmp = i;
    for(int j=0;j<N;j++){
      if(tmp % 2 == 0) use[j] = false;
      else use[j] = true;
      tmp /= 2;
    }
    //for(int j=0;j<N;j++) cout << use[j] << " ";
    //cout << endl;

    bool allok = true;
    for(int j=0;j<M;j++){
      int cnt = 0;
      for(int m=0;m<k[j];m++){
        if(use[s[j][m]]) cnt++;
      }
      if((cnt % 2) != p[j]){
        allok = false;
        break;
      }
    }

    if(allok) ans++;
  }

  cout << ans << endl;
  return 0;
}
