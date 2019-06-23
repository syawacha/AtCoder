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

  bool foundA = false;
  int posA;
  int posZ;
  for(int i=0;i<(int)s.size();i++){
    if(!foundA && s[i] == 'A'){
      posA = i;
      foundA = true;
    }
    if(s[i] == 'Z') posZ = i;
  }

  cout << posZ - posA + 1 << endl;
  return 0;
}
