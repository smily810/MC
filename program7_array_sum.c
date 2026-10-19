#include <LPC21XX.h>
void swap(unsigned int *arr, unsigned int i, unsigned int j)
{
    unsigned int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
void bubblesort(unsigned int arr[], unsigned int n)
{
    unsigned int i, j;

    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
                swap(arr, j, j + 1);
        }
    }
}
int main()
{
    unsigned int arr[] = {5, 1, 4, 2, 8};
    unsigned int N = sizeof(arr) / sizeof(arr[0]);
    bubblesort(arr, N);
    return 0;
}
