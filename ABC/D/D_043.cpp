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
  cin >> s;
  int N = s.size();
  //aa もしくは abaがあればアンバランス
  for(int i=0;i<N-1;i++){
    if(s[i] == s[i+1]){
      cout << i+1 << " " << i+2 << endl;
      return 0;
    }
  }

  for(int i=0;i<N-2;i++){
    if(s[i] == s[i+2]){
      cout << i+1 << " " << i+3 << endl;
      return 0;
    }
  }

  cout << -1 << " " << -1 << endl;
  return 0;
}
