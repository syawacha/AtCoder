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
  int c[4][4];
  for(int i=1;i<=3;i++){
    for(int j=1;j<=3;j++) cin >> c[i][j];
  }

  if(c[1][1]-c[1][2]!=c[2][1]-c[2][2] || c[1][1]-c[1][2]!=c[3][1]-c[3][2]){
    cout << "No" << endl;
    return 0;
  }
  if(c[1][1]-c[1][3]!=c[2][1]-c[2][3] || c[1][1]-c[1][3]!=c[3][1]-c[3][3]){
    cout << "No" << endl;
    return 0;
  }
  if(c[1][1]-c[2][1]!=c[1][2]-c[2][2] || c[1][1]-c[2][1]!=c[1][3]-c[2][3]){
    cout << "No" << endl;
    return 0;
  }
  if(c[1][1]-c[3][1]!=c[1][2]-c[3][2] || c[1][1]-c[3][1]!=c[1][3]-c[3][3]){
    cout << "No" << endl;
    return 0;
  }

  cout << "Yes" << endl;
  return 0;
}
