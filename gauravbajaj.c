//Gaurav Bajaj
//16csu118
//HEAP SORT
#include<stdio.h>
void heapsort(int[],int);
void heapify(int[],int);
void adjust(int[],int);
void main()
	{
		int n,i,arr[50];
		system("clear");
		printf("\nEnter the no. of elements you want to sort:");
		scanf("%d",&n);
		printf("\nEnter the elements:");
		for(i=0;i<n;i++)
			{
				scanf("%d",&arr[i]);
			}	
		heapsort(arr,n);
		printf("\nThe Sorted Elements Are:\n");
		for(i=0;i<n;i++)
			{
				printf("\t%d\n",arr[i]);
			}
		printf("\n");
	}

void heapsort(int arr[],int n)	
	{
		int i,t;
		heapify(arr,n);
		for(i=n-1;i>0;i--)
			{
				t = arr[0];
				arr[0]= arr[i];
				arr[i]= t;
				adjust(arr,i);
			}
	}

void heapify(int arr[],int n)
	{
		int k,i,j,x;
		for(k=1;k<n;k++)
			{
				x = arr[k];
				i = k;
				j =(i-1)/2;
				while((i>0)&&(x>arr[j]))
					{
						arr[i]= arr[j];
						i = j;
						j=(i-1)/2;
					}
				arr[i]=x;
			}
	}

void adjust(int arr[],int n)
	{
		int i,j,x;
		j =0;
		x= arr[j];
		i =2*j+1;
		while(i<=n-1)
			{	
				if(i+1<= n-1)
				if(arr[i]<arr[i+1])
				i++;
				if(x<arr[i])
					{
						arr[j]= arr[i];
						j = i;
						i =2*j+1;
					}
				else
					break;
			}
		arr[j]=x;
	}








/*OUTPUT

Enter the no. of elements you want to sort:11

Enter the elements:87
21
89
52
12
32
01
45
85
47
63

The Sorted Elements Are:
        1
        12
        21
        32
        45
        47
        52
        63
        85
        87
        89


--------------------------------


*/















































