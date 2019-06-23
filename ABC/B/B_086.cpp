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

int beki[5] = {1,10,100,1000,10000};

int keta(int N){
  int ans = 0;
  while(N>0){
    N /= 10;
    ans++;
  }
  return ans;
}

int main(){
  int a,b;
  cin >> a >> b;
  int c = a*beki[keta(b)] + b;
  for(int i=1;i*i<=c;i++){
    if(i*i == c){
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
  return 0;
}
