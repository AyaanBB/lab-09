 #include <stdio.h>


int Prime(int *n) 
{
    if (*n <= 1) {
        return 0;
    }

    for (int i = 2; i < *n; i++) {
        if (*n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;

    
    scanf("%d", &n);

    if (Prime(&n)) 
    {
        printf("%d is a prime number\n", n);
    } else 
    {
        printf("%d is not a prime number\n", n);
    }

    return 0;
}
