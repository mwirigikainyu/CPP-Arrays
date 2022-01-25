#include <iostream>
using namespace std;

int secondLargest(int arr[], int n){
    int result = -1, largest = 0;
    for(int i = 1; i < n; i++){
        if(arr[i] > arr[largest]){
            result = largest;
            largest = i;
        } else {
            if(arr[i] != arr[largest]){
                if(result == -1 || arr[i] > arr[result]){
                    result = i;
                }
            }
        }
    }
    return result;
}

int main(){
    int nums[5] = {5, 20, 12, 20, 8};
    cout<<"The second largest value is at index " <<secondLargest(nums, 5)<<endl;

    return 0;
}