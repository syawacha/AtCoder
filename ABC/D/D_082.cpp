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
  string s;
  int x,y;
  cin >> s >> x >> y;
  int N = s.size();
  s = s + "T";

  vector<int> dx;
  vector<int> dy;
  bool sta = 0;
  int cnt = 0;

  for(int i=0;i<=N;i++){
    if(s[i] == 'F'){
      cnt++;
    }
    else if(s[i] == 'T'){
      if(!sta && cnt!=0) dx.push_back(cnt);
      if(sta && cnt!=0) dy.push_back(cnt);
      cnt = 0;
      sta = !sta;
    }
  }

  int sumx = 0;
  int sumy = 0;
  for(int i=0;i<(int)dx.size();i++) sumx += dx[i];
  for(int i=0;i<(int)dy.size();i++) sumy += dy[i];

  /*for(int i=0;i<dx.size();i++){
    cout << dx[i] << endl;
  }
  cout << endl;
  for(int i=0;i<dy.size();i++){
    cout << dy[i] << endl;
  }*/

  int szx = dx.size();
  int szy = dy.size();

  bool dpx[szx+1][2*sumx+1];
  fill(dpx[0],dpx[szx+1],false);
  dpx[0][sumx] = true;
  if(szx > 0){
    if(s[0] == 'F'){
      dpx[1][sumx+dx[0]] = true;
    } else {
      dpx[1][sumx-dx[0]] = true;
      dpx[1][sumx+dx[0]] = true;
    }
  }
  for(int i=2;i<=szx;i++){
    for(int j=0;j<=2*sumx;j++){
      if(dpx[i-1][j]){
        dpx[i][j-dx[i-1]] = true;
        dpx[i][j+dx[i-1]] = true;
      }
    }
  }

  /*for(int i=0;i<=szx;i++){
    for(int j=0;j<=2*sumx;j++){
      cout << dpx[i][j] << " ";
    }
    cout << endl;
  }*/

  bool dpy[szy+1][2*sumy+1];
  fill(dpy[0],dpy[szy+1],false);
  dpy[0][sumy] = true;
  for(int i=1;i<=szy;i++){
    for(int j=0;j<=2*sumy;j++){
      if(dpy[i-1][j]){
        dpy[i][j-dy[i-1]] = true;
        dpy[i][j+dy[i-1]] = true;
      }
    }
  }

  /*for(int i=0;i<=szy;i++){
    for(int j=0;j<=2*sumy;j++){
      cout << dpy[i][j] << " ";
    }
    cout << endl;
  }
  cout << "aa" << endl;*/
  if(-sumx <= x && x <= sumx && -sumy <= y && y <= sumy){
    if(dpx[szx][sumx+x] && dpy[szy][sumy+y]) cout << "Yes" << endl;
    else cout << "No" << endl;
  }
  else cout << "No" << endl;
  return 0;


}
