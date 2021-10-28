#include<stdio.h>
#define n 5
int func(int a[]);

int main(void) {

    int a[n];
    for(int i = 0 ; i < n ; ++i) {
        printf("a[%d] = ", i+1);
        scanf("%d", &a[i]);
    }

    printf("sum = %d", func(a));

}

int func(int a[]) {
    int min1,min2;
    if(a[0]<a[1]) {
        min1=a[0];
        min2=a[1];
    }
    else {
        min1=a[1];
        min2=a[0];
    }
    for( int i = 2; i <= n ; ++i) {
        if(a[i] < min2) {
            if(a[i]<min1) {
                min2=min1;
                min1=a[i];
            }
            else {
                min2=a[i];
            }
        }
    }
    return min1+min2;
}