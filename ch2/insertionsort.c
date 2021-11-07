#include <stdio.h>

void print_array(int a[],int len)
{
	for(int i=0;i<len;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}

void insertion_sort(int a[], int len)
{
	int key;
	int i;

	for(int j=1;j<len;j++){
		key=a[j];
		// Insert a[j] into the sorted sequence a[0 .. j-1]
		i=j-1;
		while(i >= 0 && a[i] > key){
			a[i+1] = a[i];
			i = i-1;
		}
		a[i+1] =  key;	
	}

}

int main()
{
	int a[6] = {5,2,4,6,1,3};
	int len = sizeof(a)/sizeof(a[0]);
	
	printf("array before insertion sort:\n");
	print_array(a,len);

	insertion_sort(a,len);	

	printf("array after insertion sort:\n");
	print_array(a,len);
	
}
