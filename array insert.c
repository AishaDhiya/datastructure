#include <stdio.h>

int main()

{
	int array[100],position,n,i,value;
	printf("enter number of elements in array");
	scanf("%d" , &n);
	printf("enter %d elements");
	for (i=o;i<n; i++)
	scanf("%d" , array[i]);
	printf("enter the location for insertion");
	scanf("%d" , &position);
	printf("enter the value to insert");
	scanf("%d" , &value);
	for (i=i-1; i >=position-1;i--)
	array[i+1] = array[i];
	array[position-1] = value;
	printf("resultant array
	is");
	for (i=o;i<n; i++)
	printf("%d" , array[i]);
	return 0;
}
