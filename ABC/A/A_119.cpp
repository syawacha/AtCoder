#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
typedef long long ll;
using namespace std;

int main(){
  cin.sync_with_stdio(false);
  cin.tie(0);

  string str;
  cin >> str;

  int ten,one;
  ten=str[5]-'0';
  one=str[6]-'0';

  int month=ten*10+one;

  if(month <= 4) cout <<"Heisei" << endl;
  else cout << "TBD" << endl;
  return 0;

}
