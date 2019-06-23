#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;

int main(){
  int N,K;
  cin >> N >> K;

  //Kが奇数->abc全部Kの倍数
  if(K%2!=0){
    ll X;
    X=N/K;
    cout << X*X*X << endl;
    return 0;
  }
  //Kが偶数->abc全部Kの倍数またはKの倍数プラスk/2
  else{
    ll X;
    ll Y;
    X=N/K;
    Y=(N+K/2)/K;
    cout << X*X*X+Y*Y*Y << endl;
    return 0;
  }
}
