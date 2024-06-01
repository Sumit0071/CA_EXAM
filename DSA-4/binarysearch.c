#include<stdio.h>
int binarySearch(int arr[],int l,int r,int target){
while(l<=r){
      int mid = r + (l-r) / 2;
        if(arr[mid]==target){
            return mid;
        }
        else if(target<arr[mid]){
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
        return -1;
    }
}
int main(){
    int arr[100],n,target;
    printf("Enter the number of elements in the array:\n");
    scanf("%d", &n);
    printf("Enter the elements in the array:\n");

    for (int i = 0; i < n;i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the target element: ");
    scanf("%d", &target);
  int result=  binarySearch(arr, 0,n-1 , target);
  if(result==-1)
      printf("Number not found");
  printf("The target found at %d", result);
  return 0;
}