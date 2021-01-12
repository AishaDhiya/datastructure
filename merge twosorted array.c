#include<stdio.h>
int ain()
{
	intn1,i,arr1[20],n2,j,arr2[20],arr3[30],k,temp,t,flag;
	
	//unsorted array 1
	printf("\n eneter the size of the array:"\n);
	scanf("%d",&n1);
	printf("\n enter the elementsin the array1:"\n)
    for(i=0;i<n1;i++)
    {
		scanf("%d",&arr1[i]);
	}
	
	//unsorted array 2
	printf("\n eneter the size of the array2:"\n);
	scanf("%d",&n2);
	printf("\n enter the elementsin the array2:"\n)
    for(j=0;j<n2;j++)
    {
		scanf("%d",&arr2[j]);
	}
	
	//display array 1 and array2
	printf("\n\narray1...\n");
	for(i=0;i<n1;i++)
	{
		printf("%d\t",arr1[i]);
	}
	printf("\n\narray2...\n");
	for(j=0;j<n2;j++)
	{
		printf("%d\t",arr2[j]);
	}
	
	//merge and display unsorted array
	printf("\n\nmerged array before sorting\n");
	for(k=0;k<n1;k++)
	{
		arr3[k]=arr1[k];
	}
	t=n1+n2
	for(k=0;k<tk++)
	{printf("%d\t",arr3[k]);
	}
	//sort merged array
	for(i=0;i<t-1;i++)
	{
		flag=0;
		for(j=0;j<t-1-i;j++)
		{
			if(arr3[j]>aar3[j+1])
			{
				temp=arr3[j];
				arr3[j+1]=temp;
				flag=1;
			}
		}
		if(flag==0)
		break;
	}
	printf(\n\nafter sorting\n");
	for(i=0;i<t;i++)
	{
		printf("%d\t",arr3[i]);
	}
}
