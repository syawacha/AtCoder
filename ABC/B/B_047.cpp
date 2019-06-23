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

int main(){
  int W,H,N;
  cin >> W >> H >> N;
  int xl = 0;
  int xh = W;
  int yl = 0;
  int yh = H;

  for(int i=0;i<N;i++){
    int x,y,a;
    cin >> x >> y >> a;
    if(a == 1) xl = max(xl,x);
    if(a == 2) xh = min(xh,x);
    if(a == 3) yl = max(yl,y);
    if(a == 4) yh = min(yh,y);
  }

  int dx = max(xh - xl , 0);
  int dy = max(yh - yl , 0);

  cout << dx * dy << endl;
  return 0;
}
