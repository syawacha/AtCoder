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

ll XOR(ll a, ll b){
  ll sum = 0LL;
  for(int i=0;i<=40;i++){
    if(a%2 == 1 && b%2 == 0) sum += (1LL << i);
    if(a%2 == 0 && b%2 == 1) sum += (1LL << i);

    a /= 2;
    b /= 2;
  }
  return sum;
}

int main(){
  ll A,B;
  cin >> A >> B;

  if(A%2==0 && B%2==0){
    if((B-A)%4==2){
      cout << XOR(B,1) << endl;
    }
    if((B-A)%4==0){
      cout << B << endl;
    }
  }

  if(A%2==1 && B%2==0){
    if((B-A)%4==1){
      cout << XOR(A,B) << endl;
    }
    if((B-A)%4==3){
      cout << XOR(A,XOR(B,1)) << endl;
    }
  }

  if(A%2==0 && B%2==1){
    if((B-A)%4==1){
      cout << 1 << endl;
    }
    if((B-A)%4==3){
      cout << 0 << endl;
    }
  }

  if(A%2==1 && B%2==1){
    if((B-A)%4==0){
      cout << A << endl;
    }
    if((B-A)%4==2){
      cout << XOR(A,1) << endl;
    }
  }

  return 0;
}
