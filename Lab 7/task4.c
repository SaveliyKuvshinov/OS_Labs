#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void *my_realloc(void* ptr, size_t size)
{
    if (!ptr)
    {
        return malloc(size);
    }
    if (size == 0)
    {
        free(ptr);
        return NULL;
    }
    void *new_ptr = malloc(size);
    memmove(new_ptr, ptr, size);
    free(ptr);
    return new_ptr;
}


int main()
{
    printf("Enter original array size:");
	int n1=0;
	scanf("%d",&n1);
    int* a1 = malloc(n1 * sizeof(int));
	int i;
	for(i=0; i<n1; i++){
		a1[i]=100;
		printf("%d ", a1[i]);
	}

	printf("\nEnter new array size: ");
	int n2=0;
	scanf("%d",&n2);

	a1 = my_realloc(a1, n2 * sizeof(int));


	for(i=0; i<n2;i++){
		printf("%d ",a1[i]);
	}
	printf("\n");


	return 0;
}
