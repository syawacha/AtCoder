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

ll gcd(ll a, ll b){
  ll big,small;
  if(a>b){
    big=a;
    small=b;
  }else if(a<b){
    big=b;
    small=a;
  }else{
    return a;
  }

  ll rest=1;
  while(1){
    rest=big%small;
    if(rest==0) break;
    big=small;
    small=rest;
  }

  return small;
}

//--------------------------------------------
int main(){
  int N;
  cin >> N;
  ll x;
  cin >> x;
  for(int i=0;i<N-1;i++){
    ll y;
    cin >> y;
    x = x / gcd(x,y) * y;
  }

  cout << x << endl;
  return 0;
}
