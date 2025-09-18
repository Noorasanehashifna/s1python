#include<stdio.h>
int main(){
   int arr[100];
   int i,n,pos;
   
    printf("Enter the number of elements:");
    scanf("%d",&n);
    
    printf("Enter %d elements",n);
    for(i=0;i<n;i++){
       scanf("%d", &arr[i]);
    }
    
    printf("Enter position to delete(1 to %d):", n);
    scanf("%d",&pos);
    
    if(pos<1 ||pos>n){
       printf("Invalid position");
    }else{
        for(i=pos-1;i<n-1;i++){
           arr[i]=arr[i+1];
            
        }
        n--;
   
    
    printf("array after deletion:");
    for(i=0;i<n;i++){
       printf("%d",arr[i]);

    }
    printf("\n");
 }
 return 0;
}

