#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  //2������ ǥ�������� 1�� ������ ���ΰ�?
  unsigned int x;  //���� �ƴϿ��� �ؼ� ����� ���� 
  int b;
  
  printf("input a number :");
  scanf("%ui", &x);
  
  for(b=0; x != 0; x >>= 1)
  {
           if (x & 1)   //x�� 2������ ǥ������ �� ������ �ڸ����� 1���� 0���� �Ǻ��ϴ� �� 
           {
                 b++;   //���̸� b�� �ϳ� �������Ѷ�  
           }
  }
  
  printf("The result is : %i\n", b);
  system("PAUSE");	
  return 0;
}
