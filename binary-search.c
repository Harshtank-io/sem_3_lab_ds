#include <stdio.h>

int binary_search(int key, int arr[], int n)
{
    int left, right;
    left = 0;
    right = n;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return -1;
}
void main()
{
    int n, key;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &key);
    int b = binary_search(key, arr, n);
    printf("%d", b);
}