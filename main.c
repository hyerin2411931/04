#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  //2진수로 표현했을때 1의 개수가 몇인가?
  unsigned int x;  //음수 아니여야 해서 양수로 한정 
  int b;
  
  printf("input a number :");
  scanf("%ui", &x);
  
  for(b=0; x != 0; x >>= 1)
  {
           if (x & 1)   //x를 2진수로 표현했을 때 마지막 자릿수가 1인지 0인지 판별하는 식 
           {
                 b++;   //참이면 b를 하나 증가시켜라  
           }
  }
  
  printf("The result is : %i\n", b);
  system("PAUSE");	
  return 0;
}
