#include<iostream>
using namespace std;

int maxElement(int arr[],int n){
    int max = INT_MIN; 
    for (int i = 0 ; i<n ; i++){
        if(arr[i]> max) max = arr[i];
    }
    return max; 
}
int minElement(int arr[],int n){
    int min = INT_MAX; 
    for (int i = 0 ; i<n ; i++){
        if(arr[i]< min) min = arr[i];
    }
    return min; 
}
 
int main()
{

    int arr[] = {3,5,4,1,9};
    //Max Element is 9 
    //Min element is 1

    cout <<"Max Element is "<<maxElement(arr, 5)<<endl; 
    cout <<"Min Element is "<<minElement(arr, 5)<<endl; 

 
    return 0;
}