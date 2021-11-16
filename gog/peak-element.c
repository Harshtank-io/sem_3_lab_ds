#include <stdio.h>
int peakElement(int arr[], int n);
void main()
{
    int arr[100];
    int n;

    printf("Enter the limit of array : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter the array : ");
        scanf("%d", &arr[i]);
    }
     peakElement( arr[], int n);
}
int peakElement(int arr[], int n)
{
    for (int i = 0; i <= arr[i]; i++)
    {
        if (arr[i] >= arr[i + 1] || arr[i - 1])
        {
            printf("%d is index greater than negibour", arr[i]);
        }
    }
}