#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int second;
    printf("input the second: ");
    scanf("%i", &second);
    
    printf("The time for %i second is %i : %i : %i\n",
    second, second/3600, (second%3600)/60, (second%3600)%60); 
  system("PAUSE");	
  return 0;
}
