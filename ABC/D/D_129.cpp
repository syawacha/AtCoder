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
  int H, W;
  cin >> H >> W;
  char s[H][W];
  for(int i = 0; i < H; i++){
    for(int j = 0; j < W; j++){
      cin >> s[i][j];
    }
  }

  vector<int> yoko[H];
  for(int i = 0; i < H; i++) yoko[i].push_back(-1);
  vector<int> tate[W];
  for(int i = 0; i < W; i++) tate[i].push_back(-1);
  for(int i = 0; i < H; i++){
    for(int j = 0; j < W; j++){
      if(s[i][j] == '#'){
        yoko[i].push_back(j);
        tate[j].push_back(i);
      }
    }
  }
  for(int i = 0; i < H; i++) yoko[i].push_back(W);
  for(int i = 0; i < W; i++) tate[i].push_back(H);

  /*for(int i = 0; i < H; i++){
    for(int j = 0; j < yoko[i].size(); j++){
      cout << yoko[i][j] << " ";
    }
    cout << endl;
  }*/

  int ans = 0;
  for(int i = 0; i < H; i++){
    for(int j = 0; j < W; j++){
      if(s[i][j] != '#'){
        int y = *lower_bound(yoko[i].begin(), yoko[i].end(), j) - *(lower_bound(yoko[i].begin(), yoko[i].end(), j) - 1) - 1;
        //cout << y << endl;
        int t = *lower_bound(tate[j].begin(), tate[j].end(), i) - *(lower_bound(tate[j].begin(), tate[j].end(), i) - 1) - 1;

        ans = max(ans, y + t - 1);
      }
    }
  }

  cout << ans << endl;
  return 0;
}
