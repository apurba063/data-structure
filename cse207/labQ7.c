
#include<stdio.h>
#include<time.h>
main()
{
    int number,i,j;
    printf("Enter the number: ");
    scanf("%d",&number);
    getPrimes(number);

}
void getPrimes(int number)
{
    clock_t start = clock();
    int primes[number+1];
    for(int i=0; i<=number; i++)
        primes[i] = 1;

    for(int j = 2; j*j <=number; j++)
    {
        if(primes[j] == 1)
        {

            for( int i = j*j; i <= number; i = i+ j)
                primes[i] = 0;
        }
    }

    int c = 0;
    for(int i = 2; i <= number; i++)
    {
        if(primes[i] == 1)
            c++;
    }
    printf("Number of Primes between 1 to %d : %d\n",number,c);
    clock_t end = clock();
    float seconds = (float)(end - start) / CLOCKS_PER_SEC;
    printf("Time taken: %.5f",seconds);

}

