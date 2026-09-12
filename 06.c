#include <stdio.h>
int main()
{
 int a = 5, b = 10, c = 2, result1, result2;
 
 result1 = a + b * c;

 result2 = (a + b) * c;

 printf("a + b * c = %d\n", result1);

 printf("(a + b) * c = %d\n", result2);

 int x = 5, y = 10, z = 15;

 int logic_result = x < y && y < z;

 printf("x < y && y < z = %d\n", logic_result);

 return 0;   
}