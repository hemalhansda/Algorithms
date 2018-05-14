#include<stdio.h>
int arr[50];
int main()
{
	int i,n;
	printf("---------------------------------------\n");
	printf("Enter the size of the array:- ");
	scanf("%d", &n);
	printf("---------------------------------------\n");
	printf("Enter the elements of array:- ");
	for(i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
	printf("Your array is:- ");
	for(i=0;i<n;i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("---------------------------------------\n");
	part(arr,0,n-1);
	printf("Your array after being sorted:- ");
	for(i=0;i<n;i++){
		printf("%d ", arr[i]);
	}
	printf("\n---------------------------------------\n");
	return 0;
}
void part(int arr[],int min,int max)
{
 int mid;
 if(min<max)
 {
   mid=(min+max)/2;
   part(arr,min,mid);
   part(arr,mid+1,max);
   merge(arr,min,mid,max);
 }
}


void merge(int arr[],int min,int mid,int max)
{
  int tmp[30];
  int i,j,k,m; 
  j=min;
  m=mid+1;
  for(i=min;j<=mid && m<=max;i++)
  {
     if(arr[j]<=arr[m])
     {
         tmp[i]=arr[j];
         j++;
     }
     else
     {
         tmp[i]=arr[m];
         m++;
     }
  }
  if(j>mid)
  {
     for(k=m; k<=max; k++)
     {
         tmp[i]=arr[k];
         i++;
     }
  }
  else
  {
     for(k=j; k<=mid; k++)
     {
        tmp[i]=arr[k];
        i++;
     }
  }
  for(k=min; k<=max; k++)
     arr[k]=tmp[k];   
}