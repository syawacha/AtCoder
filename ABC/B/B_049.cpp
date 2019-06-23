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
  int H,W;
  cin >> H >> W;
  char c[H+1][W+1];
  for(int i=1;i<=H;i++){
    for(int j=1;j<=W;j++){
      cin >> c[i][j];
    }
  }

  for(int i=1;i<=2*H;i++){
    for(int j=1;j<=W;j++){
      cout << c[(i+1)/2][j];
    }
    cout << endl;
  }

  return 0;
}
