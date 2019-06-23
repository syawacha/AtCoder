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
  //string str = "ABC";
  //int a = (int)str[0];
  //cout << a << endl;

  string str;
  cin >> str;
  int N = str.size();

  if(str[0]!='A'){
    cout << "WA" << endl;
    return 0;
  }

  int cntC = 0;
  int posC;
  for(int i=0;i<N;i++){
    if(str[i]=='C'){
      cntC++;
      posC = i;
    }
  }
  if(cntC!=1 || posC<2 || N-2<posC){
    cout << "WA" << endl;
    return 0;
  }

  int cntbig = 0;
  for(int i=0;i<N;i++){
    int tmp = (int)str[i];
    if(65<=tmp && tmp<=90){
      cntbig++;
    }
  }
  if(cntbig!=2){
    cout << "WA" << endl;
    return 0;
  }

  cout << "AC" << endl;
  return 0;
}
