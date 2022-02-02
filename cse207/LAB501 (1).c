#include<stdio.h>
int GCD(int num1,int num2){

    if(num2==0)
    {
      return num1;
    }
    else
        return GCD(num2,num1%num2);
}

int main() {

    int num1,num2;
    scanf("%d %d", &num1, &num2);
    printf("GCD is %d",GCD(num1,num2));

    return 0;
}
