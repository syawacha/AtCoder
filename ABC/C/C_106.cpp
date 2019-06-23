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
  string S;
  ll K;
  cin >> S >> K;
  int n = S.size();

  //S=11111159938なら5を
  //S=678....なら6を

  int pos=0;
  int atai;
  while(1){
    if(pos==n){
      cout << 1 << endl;
      return 0;
    }
    if(S[pos]=='1'){
      pos++;
    }else{
      atai = S[pos] - '0';
      break;
    }
  }

  //cout << "pos" << pos << "atai" << atai << endl;

  if(K<=pos){
    cout << 1 << endl;
  }else{
    cout << atai << endl;
  }
  return 0;
}
