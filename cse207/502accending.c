
#include<stdio.h>
int ascending(int num) {
    int i,k;
    if (num==0)
    {
        return 0;
    }
    if(num==1)
    {
      printf("%d ",num);
      return num;
    }
    else
    {
     ascending(num-1);
    }
     printf("%d ",num);
}
int main() {
    int num;
    scanf("%d", &num);
    ascending(num);
    return 0;
}
