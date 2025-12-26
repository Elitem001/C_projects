#include <stdio.h>

int main()
{
    int n;

    int t1 = 0; // terms
    int t2 = 1;

    int next_t = t1 + t2; // spocitavanie

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci sequence: |%d %d| ", t1, t2);

    // prikaz
    for (int i = 3; i <= n; ++i)
    {
        printf("%d ", next_t);
        t1 = t2;
        t2 = next_t;
        next_t = t1 + t2;
    }
    printf("\n");

    return 0;
}