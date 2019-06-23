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
  int a, b;
  cin >> a >> b;
  if(a % 3 == 0 || b % 3 == 0 || (a + b) % 3 == 0){
    cout << "Possible" << endl;
  }
  else{
    cout << "Impossible" << endl;
  }

  return 0;
}
