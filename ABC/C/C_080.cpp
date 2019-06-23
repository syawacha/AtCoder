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
  int N;
  cin >> N;
  int F[N][10];
  for(int i=0;i<N;i++){
    for(int j=0;j<10;j++){
      cin >> F[i][j];
    }
  }
  int P[N][11];
  for(int i=0;i<N;i++){
    for(int j=0;j<11;j++){
      cin >> P[i][j];
    }
  }

  //全探索
  int ans = -1000000000;
  for(int i=1 ; i<(1 << 10) ; i++){
    int use[10];
    int itmp = i;
    for(int j=0;j<10;j++){
      if(itmp%2==1) use[j] = 1;
      else use[j] = 0;
      itmp /= 2;
    }

    int anstmp = 0;
    for(int j=0;j<N;j++){
      int cnt = 0;
      for(int k=0;k<10;k++){
        if(F[j][k]==1 && use[k]==1) cnt++;
      }
      anstmp += P[j][cnt];
    }

    //cout << "aaa" << endl;
    ans = max(ans, anstmp);
  }

  cout << ans << endl;
  return 0;
}
