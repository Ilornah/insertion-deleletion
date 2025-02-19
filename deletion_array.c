#include<stdio.h>

int find_element(int arr[], int key, int n)
{
    int i;
    for(i=0;i < n; i++)
        if(arr[i] == key)
        return i;

    return -1;
}

int del_element(int arr[], int n, int key)
{
    int pos = find_element(arr, n, key);

    if (pos == -1) {
        printf("Element not found");
        return n;
    }
    int i;
    for (i = pos; i < n - 1; i++)
        arr[i] = arr[i + 1];

    return n - 1;
}
int main()
{
    int i;
    int arr[] = { 1, 45, 12, 55, 89 };

    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 30;

    printf("Array before deletion\n");
    for (i = 0; i < n; i++)
        printf("%d  ", arr[i]);

    n = del_element(arr, n, key);

    printf("\nArray after deletion\n");
    for (i = 0; i < n; i++)
        printf("%d  ", arr[i]);

    return 0;
}




