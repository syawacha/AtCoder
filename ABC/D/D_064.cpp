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
  int N;
  cin >> N;
  string S;
  cin >> S;

  int st = 0;
  int lcnt = 0;

  for(int i=0;i<N;i++){
    if(S[i] == '(') st++;
    else st--;

    if(st < 0){
      lcnt++;
      st = 0;
    }
  }

  for(int i=0;i<lcnt;i++){
    cout << '(';
  }
  cout << S ;
  for(int i=0;i<st;i++){
    cout << ')';
  }
  cout << endl;
  return 0;
}
