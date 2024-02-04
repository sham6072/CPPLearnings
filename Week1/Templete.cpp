#include <iostream>
using namespace std;

template <typename  T> 
void print(T* arr, int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {8,96 ,7,8,4};

    print(arr,5);
}