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
  int a,b,c,d;
  d = N%10;
  N /= 10;
  c = N%10;
  N /= 10;
  b = N%10;
  N /= 10;
  a = N;

  //全探索
  for(int i=0 ; i<(1<<3) ; i++){
    vector<int> use;
    vector<char> usechar;
    int itmp = i;
    for(int j=0;j<3;j++){
      if(itmp%2==1){
        use.push_back(1);
        usechar.push_back('+');
      }
      else {
        use.push_back(-1);
        usechar.push_back('-');
      }
      itmp /= 2;
    }

    int sum;
    sum = a + b*use[0] + c*use[1] + d*use[2];
    if(sum == 7){
      cout << a << usechar[0] << b << usechar[1] << c << usechar[2] << d << "=7" << endl;
      return 0;
    }
  }
  return 0;
}
