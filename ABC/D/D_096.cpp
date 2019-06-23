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

bool isPrime(int N){
  if(N<=1) return false;
  if(N==2) return true;
  if(N%2==0) return false;

  for(int i=3 ; i*i<=N ; i+=2){
    if(N % i == 0) return false;
  }

  return true;
}

//-------------------------------

int main(){
  int N;
  cin >> N;
  vector<int> pset;

  for(int i=0 ; i<=5555 ; i++){
    if((int)pset.size() == N) break;
    if(isPrime(10*i+1)) pset.push_back(10*i+1);
  }

  for(int i=0;i<N;i++){
    cout << pset[i] << " ";
  }
  cout << endl;

  return 0;
}
