
#include <stdio.h>

int decimal_to_binary(int num)
{
    if (num==0)
        return 0;
    else
        return ((num%2)+10*decimal_to_binary(num/2));
}
int main()
{
   int num;
   scanf("%d",&num);
   printf("%d",decimal_to_binary(num));
}
