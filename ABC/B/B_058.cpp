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
  string A,B;
  cin >> A >> B;

  int N = A.size();
  int M = B.size();

  for(int i=0;i<N;i++){
    if(i == N-1 && N==M){
      cout << A[i] << B[i] << endl;
    }
    if(i == N-1 && N-1==M){
      cout << A[i] << endl;
    }
    if(i != N-1){
      cout << A[i] << B[i];
    }
  }

  return 0;
}
