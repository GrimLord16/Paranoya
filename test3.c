#include<stdio.h>
#define N 5
int SumOfMin(int numbers[]);

int main(void) 
{

    int numbers[N];
    for(int i = 0 ; i < N ; ++i) //  We type in an array
    {
        printf("Input numbers in array pls[%d] = ", i+1);
        scanf("%d", &numbers[i]);
    }

    printf("The sum of the 2 minimum numbers = %d", SumOfMin(numbers));// And the last step - we show the result of the function

}

int SumOfMin(int numbers[])
{
    int min1, min2; //Firstly, we find out which of the first 2 variables is smaller.
    if(numbers[0] < numbers[1])
    {
        min1 = numbers[0];
        min2 = numbers[1];
    }
    else{
        min1 = numbers[1];
        min2 = numbers[0];
    }
    for( int i = 2; i <= N; ++i) // Then, we go through the array of numbers and change first 2, so that we could get an easy access to them later 
    {
        if(numbers[i] < min2)
        {
            if(numbers[i] < min1)
            {
                min2 = min1;
                min1 = numbers[i];
            }
            else
            {
                min2 = numbers[i];
            }
        }
    }
    return min1 + min2; //In the end, we return the sum of 2 first numbers as their values are the lowest
}
