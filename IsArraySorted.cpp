#include <iostream>
using namespace std;

bool IsSorted(int list[]){
    for(int i = 0; i < 5; i++){
        for(int j = i+1; j < 5; j++){
            if(list[j] < list[i]){
                return false;
            }
        }
    }
    return true;
}

//more efficient function
bool isSorted(int list[], int n){
    for(int i = 1; i < n; i++){
        if(list[i] < list[i-1]){
            return false;
        }
    }
    return true;
}


int main(){
    int arr[5] = {4,2,6,3,9};
    int arr1[5] = {2,5,7,9,11};
    int arr2[5] = {4,8,12,24,33};
    cout<<isSorted(arr, 5)<<endl;
    cout<<isSorted(arr1, 5)<<endl;
    cout<<isSorted(arr2, 5)<<endl;

    return 0;
}