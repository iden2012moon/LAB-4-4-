#include <stdio.h>
int main(void){
  int per;
  float L1,L2,area,sumL,height;
  printf("Enter L1 :");
  scanf("%f", &L1);
  printf("Enter L2 :");
  scanf("%f", &L2);
  printf("Enter height :");
  scanf("%f", &height);
  per =(L2/L1)*100;
  printf("L2 = %d % \n",per);
  sumL = L1+L2;
  if(per>=40) {
    area = 0.5*height*sumL;
  printf("Ans : %0.3f", area);
  }
  return 0;
}
