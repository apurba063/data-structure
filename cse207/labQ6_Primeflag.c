#include<stdio.h>
#include<time.h>
main()
{
    int N,i;
    printf("Input N: ");
    scanf("%d",&N);
    int c = 0;

    clock_t start = clock();

    for(i=1; i<=N; i++)
    {
        if(isPrimeFlag(i)==0)
        {
            c++;
        }
    }
    printf("Number of Primes between 1 to %d : %d\n",N,c);
    clock_t end = clock();
    float seconds = (float)(end - start) / CLOCKS_PER_SEC;
    printf("Time taken: %.5f",seconds);

}
int isPrimeFlag(int n)
{
    int j;
    int flag = 0;


    for(j=2; j*j<=n; j++)
    {
        if(n%j==0)
        {
            flag=1;
            break;
        }
    }

    return flag;
}

