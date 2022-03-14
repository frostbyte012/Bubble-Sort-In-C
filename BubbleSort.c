#include<stdio.h>
# define size 10
int ar[size];
void bubblesort(int ar[size],int n);
void display(int ar[size],int n);
void main()
{   
    int i,n,f=0;
    printf("\n Enter The size of the array \n");
	scanf(" %d",&n);
	for(i=0;i<n;i++)
	 scanf(" %d",&ar[i]);
	bubblesort(ar,n);
	
}
void bubblesort(int ar[size],int n)
{   
    int i,t=0,j;    
	for(i=0;i<n;i++)
	  {
	  	for(j=0;j<n;j++)
	  	   {
	  	   	  if(ar[i]<ar[j])
	  	   	  {
	  	   	      t=ar[i];
			      ar[i]=ar[j];
				  ar[j]=t;  	
			  }
		   }
	  }
	  
	  display(ar,n);
}
void display(int ar[size],int n)
{
	int i=0;
	 printf("\n");
	for(i=0;i<n;i++)
        printf(" %d",ar[i]);
    printf("\n");
}
