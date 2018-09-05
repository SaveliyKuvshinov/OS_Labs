#include <stdio.h>
#include <stdlib.h>

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}


void arr_print(int *arr[])
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void bubble_sort(int *arr[])
{
    for (int i = 0; i < 5-1; i++)
        for (int j = 0; j < 5-i-1; j++)
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
}

int main()
{
    int *arr = (int)malloc(5 * sizeof(int));
    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    arr_print(arr);
    bubble_sort(arr);
    arr_print(arr);
    return 0;
}
