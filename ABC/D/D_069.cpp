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

typedef pair<int,int> P;

int H,W;

P nxt(int a, int b){
  if(a%2==1){
    if(b==0) return P(a+1,0);
    else return P(a,b-1);
  }
  else {
    if(b==W-1) return P(a+1,W-1);
    else return P(a,b+1);
  }
}

int main(){
  cin >> H >> W;
  int N;
  cin >> N;
  int a[N];
  for(int i=0;i<N;i++) cin >> a[i];

  int grd[H][W];
  P now = P(0,0);

  for(int i=0;i<N;i++){
    for(int j=0;j<a[i];j++){
      grd[now.first][now.second] = i + 1;
      now = nxt(now.first,now.second);
    }
  }

  for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
      cout << grd[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
