#include <stdio.h>
#define MAX_SIZE 100
int main()
{
	int arr[max_size];
	int i,size,pos;
	printf("enter the size of the array");
	scanf("%d" ,&size);
	printf("enter elements of array");
	for(i=0 ;i<size;i++)
	{
		scanf("%d" ,&arr[i])
	}
	printf("enter the element position to delete")
	scanf("%d" ,&pos);
	if(pos<0 or pos>size)
	{
	printf("invalid position enter positionbetween1 to %d", size);
   }
   else
   for(i=pos-1;i<size-1;i++);
   {arr[i]=arr[i+1]};
   printf("elements of array after deletion"
   );
   for(i=0;i<size;i++)
   printf("%d",arr[i]):
}
   

