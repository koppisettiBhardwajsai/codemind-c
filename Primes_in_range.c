#include <stdio.h>
int IsPrime(int num) 
{
    if (num <= 1) 
    {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) 
    {
        if (num % i == 0) 
        {
            return 0;
        }
    }
    return 1;
}
int CountOfPrimes(int start, int end) 
{
    int count = 0;
    for (int i = start; i <= end; i++)
    {
        if (IsPrime(i)) 
        {
            count++;
        }
    }
    return count;
}
int main() 
{
    int start, end;
    scanf("%d %d", &start, &end);
    int primeCount = CountOfPrimes(start, end);
    printf("%d",primeCount);
}