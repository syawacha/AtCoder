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
  int A,B,K;
  cin >> A >> B >> K;
  for(int i=100;i>=0;i--){
    if(A%i==0 && B%i==0){
      K--;
    }
    if(K==0){
      cout << i << endl;
      break;
    }
  }
  return 0;
}
