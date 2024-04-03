#include <stdio.h>
int main() {
  float Math, English, SE113, SE112, AOL, average;
  printf("Enter the result for Math :  ");
  scanf("%f", &Math);
  printf("Enter the result for English :  ");
  scanf("%f", &English); 
  printf("Enter the result for SE112 :  ");
  scanf("%f", &SE112);
  printf("Enter the result for AOL :  ");
  scanf("%f", &AOL); 
  printf("Enter the result for SE113 :  ");
  scanf("%f", &SE113);  

  average = (Math + English + SE112+SE113 + AOL) / 5.0;
  printf("The Average results of these five subject is: %.2f\n", average);
  return 0;
}