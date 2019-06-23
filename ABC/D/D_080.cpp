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

struct record{
  int st = 0;
  int ft = 0;
  int ch = 0;
  bool used = false;
};

int main(){
  int N,C;
  cin >> N >> C;
  pair<pair<int,int>,int> p[N];
  for(int i=0;i<N;i++){
    cin >> p[i].first.first >> p[i].first.second >> p[i].second;
  }
  sort(p,p+N);

  /*cout << endl;
  for(int i=0;i<N;i++){
    cout << p[i].first.first << " " << p[i].first.second << " " << p[i].second << endl;;
  }*/

  record rec[30];

  for(int i=0;i<N;i++){
    for(int j=0;j<30;j++){
      if(p[i].first.first > rec[j].ft){
        rec[j].st = p[i].first.first;
        rec[j].ft = p[i].first.second;
        rec[j].ch = p[i].second;
        rec[j].used = true;
        break;
      }
      else if(p[i].first.first == rec[j].ft && p[i].second == rec[j].ch){
        rec[j].st = p[i].first.first;
        rec[j].ft = p[i].first.second;
        rec[j].ch = p[i].second;
        rec[j].used = true;
        break;
      }
    }
  }

  int cnt = 0;
  for(int j=0;j<30;j++){
    if(rec[j].used) cnt++;
  }

  cout << cnt << endl;
  return 0;
}
