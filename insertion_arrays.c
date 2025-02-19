#include <stdio.h>
int insert_end(int arr[],int n,int key,int capacity)
{
    if (n >= capacity)
        return n;

    arr[n] = key;

    return (n + 1);
}

int main()
{
    int arr[8] = { 5, 10, 34, 12, 23, 44 };
    int capacity = sizeof(arr) / sizeof(arr[0]);
    int n = 6;
    int i, key = 26;

    printf("\n Before Insertion: ");
    for (i = 0; i < n; i++)
        printf("%d  ", arr[i]);

    // Inserting key
    n = insert_end(arr, n, key, capacity);

    printf("\n After Insertion: ");
    for (i = 0; i < n; i++)
        printf("%d  ", arr[i]);

    return 0;
}
