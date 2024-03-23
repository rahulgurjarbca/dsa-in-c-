// find a first and last occurance of an element in a shorted array  
// [1,2,2,2,2,3,4,5,6] => occurance of 2 is [1,4]

#include<iostream>
using namespace std;

int firstOccurance(int arr[],int size,int key){
    int first =0;
    int end = size-1;
    int mid = (first+end)/2;
    int index;
    while(first<=end){
        if(key == arr[mid] ){
            index = mid;
            end = mid-1;
        }
        else if(arr[mid]<key){
            first = mid+1;
        }
        else{
        end = mid - 1;
        }

        mid = (first+end)/2;
    }
    return index;
}

int lastOccurance(int arr[],int size,int key){
    int first =0;
    int end = size-1;
    int mid = (first+end)/2;
    int index;
    while(first<=end){
        if(key == arr[mid] ){
            index = mid;
            first = mid+1;
        }
        else if(arr[mid]<key){
            first = mid+1;
        }
        else{
        end = mid - 1;
        }

        mid = (first+end)/2;
    }
    return index;
}
//main function
int main(){
    int arr[11] = {1,2,3,3,3,3,4,4,5,6,7};
    int key=4;

    int first = firstOccurance(arr,11,key);
    cout<<"first index is:"<<first<<endl;

    int last = lastOccurance(arr,11,key);
    cout<<"last index is:"<<last;
}