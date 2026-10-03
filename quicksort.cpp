#include<iostream>
using namespace std;
// quick sort implementation
int partition(int *arr,int start,int end){
    int pivot=arr[start];
    int i=start,j=end;
    while(i<j){
        while(i<=end&&arr[i]<=pivot){
            i++;
        }
        while(j>=start&&arr[j]>pivot){
              j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }

    swap(arr[j],arr[start]);
   return j; 
}

void quicksort(int*arr,int start,int end){
    if(start>=end){
        return;
    }
    int p=partition(arr,start,end);
    quicksort(arr,start,p-1);
    quicksort(arr,p+1,end);

}


int main(){
    int array[5]={2,3,4,1,5};
    quicksort(array,0,4);
    for(int i=0;i<5;i++){
        cout<<array[i]<<" ";
    }
}