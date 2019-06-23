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
  int t[N],x[N],y[N];
  for(int i=0;i<N;i++) cin >> t[i] >> x[i] >> y[i];

  int xnow = 0;
  int ynow = 0;
  int tnow = 0;
  for(int i=0;i<N;i++){
    int xnxt = x[i];
    int ynxt = y[i];
    int dt = t[i] - tnow;

    int dist = abs(xnow - xnxt) + abs(ynow - ynxt);
    if(dt < dist){
      cout << "No" << endl;
      return 0;
    }
    if(dt%2 != dist%2){
      cout << "No" << endl;
      return 0;
    }

    xnow = xnxt;
    ynow = ynxt;
    tnow = t[i];
  }

  cout << "Yes" << endl;
  return 0;
}
