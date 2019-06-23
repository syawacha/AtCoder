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
  int a,b;
  cin >> a >> b;
  string s;
  cin >> s;

  bool isok = true;
  for(int i=0;i<s.size();i++){
    if(i==a){
      if(s[i] != '-') isok = false;
    } else {
      if(s[i] == '-') isok = false;
    }
  }

  if(isok) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}
