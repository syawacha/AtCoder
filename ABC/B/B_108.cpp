#include <iostream>
using namespace std;

int main(){
  int x[5];
  int y[5];
  cin >> x[1] >> y[1] >> x[2] >> y[2];
  x[3]=x[2]-(y[2]-y[1]);
  y[3]=y[2]+(x[2]-x[1]);
  x[4]=x[1]-(y[2]-y[1]);
  y[4]=y[1]+(x[2]-x[1]);
  cout << x[3] << " " << y[3] << " " << x[4] << " " << y[4] << endl;
  return 0;
}
