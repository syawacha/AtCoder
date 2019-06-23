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
  int N;
  cin >> N;
  string W[N];
  map<string,int> mp;
  for(int i=0;i<N;i++){
    cin >> W[i];
    mp[W[i]]++;
  }

  /*for(auto itr=mp.begin();itr!=mp.end();itr++){
    cout << itr->first << " " << itr->second << endl;
  }*/

  for(auto itr=mp.begin();itr!=mp.end();itr++){
    if(itr->second >= 2){
      cout << "No" << endl;
      return 0;
    }
  }

  bool isok=true;
  for(int i=0;i<=N-2;i++){
    char last,start;
    last=W[i][W[i].size()-1];
    start=W[i+1][0];

    //cout << last << start << endl;
    if(last != start){
      isok = false;
      break;
    }
  }

  if(isok){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }

  return 0;
}
