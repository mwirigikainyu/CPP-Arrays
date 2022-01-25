#include <iostream>
using namespace std;

int Delete(int arr[], int a, int b){
    int i;
    for(i = 0; i < a; i++){
        if(arr[i] == b){
            break;
        }
    }
    if(i == a){
        return a;
    }
    for(int j = i; j < a-1; j++){
        arr[i] = arr[j+1];
    }
    return (a-1);
}

int main(){
    int nums[6] = {4,6,2,8,9,1};
    int x = 9;
    Delete(nums, 6, x);

    return 0;
}