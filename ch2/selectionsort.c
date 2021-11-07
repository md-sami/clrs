#include <stdio.h>

void print_array(int a[],int len)
{
	for(int i=0;i<len;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}

void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

void selection_sort(int a[], int n)
{
	int i,j;
	int min_index;

	for(i=0;i<n-1;i++){
		min_index = i;
		
		for(j=i+1;j<n;j++){
			if(a[j] < a[min_index]){
				min_index = j;
			}
			
		}

		swap(&a[i],&a[min_index]);
	}
}

int main()
{
	int a[6] = {5,2,4,6,1,3};
	int len = sizeof(a)/sizeof(a[0]);
	
	printf("array before selection sort:\n");
	print_array(a,len);

	selection_sort(a,len);	

	printf("array after selection sort:\n");
	print_array(a,len);
	
}
