#include <stdio.h>
void swap_max(int arr[],int n,int index){
  int max=arr[0];
  int j=0;
  for(int i=1;i<n;i++){
    if(arr[i]>max){
     
      j=i;
  }
 }
 int temp=arr[index];
 arr[index]=arr[j];
 arr[j]=temp;
 
}
void ssort(int arr[],int n){
    for(int i=0;i<n;i++){
        swap_max(arr,n,i);
    }
    
     for(int i=0;i<n;i++){
       printf("%d\n",arr[i]);
    }
}
