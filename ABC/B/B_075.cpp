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
  string s[H];
  for(int i=0;i<H;i++) cin >> s[i];

  for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
      if(s[i][j] == '.'){
        int cnt = 0;
        for(int dx=-1;dx<=1;dx++){
          for(int dy=-1;dy<=1;dy++){
            if(i+dx>=0 && i+dx<H && j+dy>=0 && j+dy<W && s[i+dx][j+dy]=='#'){
              cnt++;
            }
          }
        }
        s[i][j] = cnt + '0';
      }
    }
  }

  for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
      cout << s[i][j];
    }
    cout << endl;
  }

  return 0;
}
