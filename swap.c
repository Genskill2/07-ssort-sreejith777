#include<stdio.h>

void swap_max(int arr[],int l,int n){
int max = arr[n];
  int m =-1;
  for(int i = n+1;i<l;i++){
  if(max<arr[i]){
  max = arr[i];
    m=i;
  }
  }
  if(m!=-1){
  arr[m] = arr[n];
    arr[n] = max;
  }
  
}

void ssort(int arr[],int l){
for(int i = 0 ; i <l;i++){
swap_max(arr,l,i);
}
}
