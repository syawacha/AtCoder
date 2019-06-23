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
  int R;
  cin >> R;
  if(R<1200) cout << "ABC" << endl;
  else if(1200<=R && R<2800) cout << "ARC" << endl;
  else cout << "AGC" << endl;
  return 0;
}
