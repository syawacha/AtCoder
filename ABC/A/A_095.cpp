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
  int cnto = 0;

  for(int i=0;i<3;i++){
    if(s[i] == 'o') cnto++;
  }

  cout << 700 + cnto * 100 << endl;
  return 0;
}
