#include <stdio.h>

int main(){
  int n;
  scanf("%d",&n);
  int N[3],M[3];
  N[2]=n/100;
  N[1]=(n%100)/10;
  N[0]=n%10;

  for(int i=0;i<=2;i++){
    if(N[i]==9) M[i]=1;
    else M[i]=9;
  }

  int m;
  m=100*M[2]+10*M[1]+M[0];
  printf("%d\n",m);
  return 0;
}
