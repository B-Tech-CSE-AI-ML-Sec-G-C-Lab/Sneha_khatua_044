/*
Count the total number of duplicate elements in an array*/
#include <stdio.h>
int countDuplicate(int arr[], int n)
{
    int count=0;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                break;
            }
        }
    }
    return count;
}
int main()
{
    int arr[100], n;
    printf("Enter array size: ");
    scanf("%d", &n);
    printf("Enter array elements:\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Total duplicate elements = %d", countDuplicate(arr, n));
    return 0;
}
