#include <stdio.h>

int Swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a,b;
    
    scanf("%d",&a);
    scanf("%d",&b);
    
    Swap(&a,&b);
    
    printf("a is now %d and b is now %d", a,b);
    
    return 0;
}