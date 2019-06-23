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
  int N,M;
  cin >> N >> M;

  pair<pair<int,int>,int> p[M];
  for(int i=0;i<M;i++){
    cin >> p[i].first.first >> p[i].first.second;
    p[i].second = i;
  }

  sort(p,p+M);

  /*for(int i=0;i<M;i++){
    cout << p[i].first.first << " ";
    cout << p[i].first.second << " ";
    cout << p[i].second << endl;
  }*/

  int id[M];
  id[0]=1;
  for(int i=1;i<M;i++){
    if(p[i].first.first != p[i-1].first.first){
      id[i]=1;
    }else{
      id[i]=id[i-1]+1;
    }
  }

  pair<int,pair<int,int> > pp[M];
  for(int i=0;i<M;i++){
    pp[i].first = p[i].second;
    pp[i].second.first = p[i].first.first;
    pp[i].second.second = id[i];
  }


  sort(pp,pp+M);

  for(int i=0;i<M;i++){
    printf("%06d%06d\n",pp[i].second.first,pp[i].second.second);
  }
  return 0;
}
