/*
Copy the elements of one array into a another array*/
#include <stdio.h>

void copyArray(int a[], int b[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        b[i] = a[i];
    }
}

int main()
{
    int a[100], b[100], n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements of first array:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    copyArray(a, b, n);

    printf("Elements of second array are:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}