
#include<stdio.h>
int descending(int num) {
    if (num==0)
    {
        return 0;
    }
    else
        printf("%d ",num);
        return descending(num-1);

}
int main() {
    int num;
    scanf("%d", &num);
    descending(num);
    return 0;
}

