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
  int N;
  cin >> N;
  ll x[N],y[N],dist[N];
  for(int i=0;i<N;i++){
    cin >> x[i] >> y[i];
    dist[i] = abs(x[i]) + abs(y[i]);
  }

  int cnte=0;
  int cnto=0;
  for(int i=0;i<N;i++){
    if(dist[i]%2 == 0) cnte++;
    else cnto++;
  }

  if(cnte>0 && cnto>0){
    cout << -1 << endl;
    return 0;
  }

  ll beki[32]; // ={1,2,4,8,...,2^30,1}
  for(int i=0;i<=30;i++) beki[i]=1LL << i;
  beki[31] = 1LL;

  //ずげての点が奇数
  if(cnte==0){
    cout << 31 << endl;

    for(int i=0;i<=30;i++) cout << beki[i] << " ";
    cout << endl;

    for(int i=0;i<N;i++){
      char mode[31];
      ll xnow=x[i];
      ll ynow=y[i];
      for(int j=30;j>=0;j--){
        if(abs(xnow)>abs(ynow)){
          if(xnow<0){
            xnow+=beki[j];
            mode[j]='L';
          }else{
            xnow-=beki[j];
            mode[j]='R';
          }
        }else{
          if(ynow<0){
            ynow+=beki[j];
            mode[j]='D';
          }else{
            ynow-=beki[j];
            mode[j]='U';
          }
        }
      }

      for(int j=0;j<=30;j++) cout << mode[j];
      cout << endl;
    }
    return 0;
  }

  //すげての点が偶数
  if(cnto==0){
    cout << 32 << endl;

    for(int i=0;i<=31;i++) cout << beki[i] << " ";
    cout << endl;

    for(int i=0;i<N;i++){
      char mode[32];
      ll xnow=x[i];
      ll ynow=y[i];
      for(int j=31;j>=0;j--){
        if(abs(xnow)>abs(ynow)){
          if(xnow<0){
            xnow+=beki[j];
            mode[j]='L';
          }else{
            xnow-=beki[j];
            mode[j]='R';
          }
        }else{
          if(ynow<0){
            ynow+=beki[j];
            mode[j]='D';
          }else{
            ynow-=beki[j];
            mode[j]='U';
          }
        }
      }

      for(int j=0;j<=31;j++) cout << mode[j];
      cout << endl;
    }
    return 0;
  }

  return 0;
}
