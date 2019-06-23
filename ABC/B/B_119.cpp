#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
typedef long long ll;
using namespace std;

int main(){
  cin.sync_with_stdio(false);
  cin.tie(0);

  int N;
  cin >> N;
  double sum=0;
  for(int i=0;i<N;i++){
    double x;
    cin >> x;
    string str;
    cin >> str;
    if(str=="JPY"){
      sum+=x;
    }else{
      sum+=x*380000.0;
    }
  }

  printf("%.5lf\n",sum);
}
