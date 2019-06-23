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
  int a,b,c;
  cin >> a >> b >> c;
  int t = a % b;
  while(1){
    if(t == c){
      cout << "YES" << endl;
      return 0;
    }

    t = (t + a) % b;

    if(t == a % b){
      cout << "NO" << endl;
      return 0;
    }
  }
}
