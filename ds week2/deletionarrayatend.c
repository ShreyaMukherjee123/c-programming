#include<stdio.h>
int main(){
	
	int size;
	printf("\n--------------------------------------------------------");
	
	printf("\nEnter the size of the Array->"
);
    scanf("%d",&size);//input array SIZE
    
    int arr[size],i,mid;
    //input element in the array 
    for(i=0;i<size;i++)
{
	printf("Enter number%d:",i+1);
	scanf("%d",&arr[i]);
	
}
	//printing elements in the array
	printf("\nOrginal array is->");
	for(i=0;i<size;i++)
{

      printf("%d", arr[i]);
}
printf("\n-----------------------------------");


    //deleting element at end
    //calculating mid
    if (size%2==0){//
    mid=size/2;
    for(i=mid-1;i<size;i++){
    	arr[i]=arr[i+1];
    	
    }
    size--;
    // delete elements in the array
    printf("\nModified array is->");
    for(i=0;i<size;i++){
    	
	}
	
    	
    		arr[i]=arr[i+1];
    
    
    	printf("%d",arr[i]);
    }
    printf(
	"\n--------------------------------------------");
	
  
    return 0;

}
		
	