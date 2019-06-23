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
  char s[H+2][W+2];
  for(int i=0;i<H+2;i++){
    for(int j=0;j<W+2;j++){
      if(i==0 || i==H+1 || j==0 || j==W+1){
        s[i][j] = '.';
      }else{
        cin >> s[i][j];
      }
    }
  }

  /*for(int i=0;i<H+2;i++){
    for(int j=0;j<W+2;j++){
      cout << s[i][j];
    }
    cout << endl;
  }*/

  for(int i=1;i<=H;i++){
    for(int j=1;j<=W;j++){
      if(s[i][j]=='#'){
        if(s[i-1][j]=='.' && s[i+1][j]=='.' && s[i][j-1]=='.' && s[i][j+1]=='.'){
          cout << "No" << endl;
          return 0;
        }
      }
    }
  }

  cout << "Yes" << endl;
  return 0;
}
