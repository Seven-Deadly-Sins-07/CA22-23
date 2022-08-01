#include <iostream>
using namespace std;
  
void swap(int a, int b)     
{ 
    int t = a; 
    a = b; 
    b = t; 
} 
   
int Partition (int arr[], int start, int end)    
{ 
    int pivot = arr[end];   
    int i = (start - 1);   
   
    for (int j = start; j <= end- 1; j++) 
    { 
        if (arr[j] <= pivot) 
        { 
            i++;  
            swap(arr[i], arr[j]); 
        } 
    } 
    swap(arr[i + 1], arr[end]); 
    return (i + 1); 
} 
   
void Quicksort(int arr[], int start, int end)      
{ 
    if (start < end) 
    { 
        int pivot = Partition(arr, start, end); 
   
        Quicksort(arr, start, pivot - 1); 
        Quicksort(arr, pivot + 1, end); 
    } 
} 
   void Displayarr(int arr[], int size) 
{ 
     
    for (int i=0; i < size; i++) 
        cout<<arr[i]<<"\t"; 
      
} 
   
int main() 
{ 
    int arr[1000];
    for(int i=0;i<1000;i++){
        arr[i]=10000-i;
    }
    int n = sizeof(arr)/sizeof(arr[0]); 
    cout<<"Input array is :"<<endl;
    Displayarr(arr,n);
    cout<<endl;
    Quicksort(arr, 0, n-1); 
    cout<<"Array sorted with quick sort :"<<endl; 
    Displayarr(arr,n); 
    return 0; 
}
