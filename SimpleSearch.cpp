#include <iostream>
using namespace std;

int Search(int arr[], int size, int key){
    for(int i = 0; i < size; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}

int main(){
    int key;
    int numbers[] = {32, 43, 64, 33, 87, 12, 28, 95};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    cout<<"Input Value Key to Search: "<<endl;
    cin>>key;
    cout<<"The key is at index: "<<Search(numbers,size,key)<<endl;

    return 0;
}