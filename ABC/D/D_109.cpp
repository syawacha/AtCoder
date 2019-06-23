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
  int a[H][W];
  for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
      cin >> a[i][j];
    }
  }


  vector<pair<int,int> > ope1;
  vector<pair<int,int> > ope2;
  int cnt=0;
  for(int i=0;i<H;i++){
    for(int j=0;j<=W-2;j++){
      if(a[i][j]%2 == 1){
        a[i][j]--;
        a[i][j+1]++;
        cnt++;
        ope1.push_back(make_pair(i+1,j+1));
        ope2.push_back(make_pair(i+1,j+2));
      }
    }
  }

  for(int i=0;i<=H-2;i++){
    if(a[i][W-1]%2 == 1){
      a[i][W-1]--;
      a[i+1][W-1]++;
      cnt++;
      ope1.push_back(make_pair(i+1,W));
      ope2.push_back(make_pair(i+2,W));
    }
  }

  /*for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
      cout << a[i][j] << " ";
    }
    cout << endl;
  }*/

  cout << cnt << endl;
  for(int i=0;i<ope1.size();i++){
    cout << ope1[i].first << " ";
    cout << ope1[i].second << " ";
    cout << ope2[i].first << " ";
    cout << ope2[i].second << endl;
  }
  return 0;
}
