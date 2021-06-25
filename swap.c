
void swap_max(int arr[],int n,int index){
  int max=arr[index];
  int j=index;
  for(int i=index;i<n;i++){
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
    
     
}
