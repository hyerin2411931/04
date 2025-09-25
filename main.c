#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int year;
  printf("input the year :");
  scanf("%i", &year);
  
  
  printf("Is the year %i leap year?(yes=1, no=0) : %i\n", 
  year,(year%4==0&&year%100 != 0)|| (year%400 == 0) );
  
  //(4로 나누어떨어지면서 100으론 안나누어떨어짐) 거나 (400으로 나누어떨어짐) 
  
  system("PAUSE");	
  return 0;
}
