#include<iostream>
using namespace std;
 



int binarySearch(int arr[], int n, int key){
    int start =0;
    int end = n-1;

    while (start<=end){
        int mid =start + (end-start)/2;

      if(arr[mid]==key){
        return mid;

      }
      if(key>arr[mid]){
        start= mid+1;


      }
      else {
        end =mid -1;

      }
           mid = start +(end -start)/2;
        }
        return -1;
    }


int main(){
    int arr[5]={2,4,6,8,10};

   
 
int index = binarySearch(arr,5,2);
cout<<"index is "<<index<<endl;

}
 


