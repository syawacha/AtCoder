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
  string s;
  cin >> s;
  int N = s.size();

  for(int i=2;;i+=2){
    int sz = N - i;
    bool isok = true;
    for(int j=0;j<sz/2;j++){
      if(s[j] != s[j+sz/2]) isok = false;
    }

    if(isok){
      cout << sz << endl;
      return 0;
    }
  }
}
