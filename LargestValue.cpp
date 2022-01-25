#include <iostream>
using namespace std;

int getLargest(int list[],int size){
    for(int i = 0; i < size; i++){
        bool large = true;
        for(int j = 0; j < size; j++){
            if(list[j] > list[i]){
                large = false;
                break;
            }
        }
        if(large == true) return i; 
    }
    return -1;
}

//more efficient function
int findLargest(int list[], int size){
    int result = 0;
    for(int i = 0; i < size; i++){
        if(list[i] > list[result]){
            result = i;
        }
    }
    return result;
}

int main(){
    int arr[] = {23,54,12,38,73,66,49};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<"The Largest Value is at index: " <<getLargest(arr,size) <<endl;
    cout << "The Largest Value is at index: " << findLargest(arr, size) << endl;

    return 0;
}