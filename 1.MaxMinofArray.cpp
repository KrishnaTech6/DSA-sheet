#include<iostream>
using namespace std;


// Normal Approach
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

//Min Max pair approach 
struct Pair {
    int min ; 
    int max; 
};

struct Pair getMinMax(int arr[] , int n ){
    struct Pair minmax ; 
    int i = 0 ; 

    // if size is even , a0 , a1 is max min accordingly 
    // if odd a0 is max min both 

    if(n%2==0){
        if(arr[0]<arr[1]){
            minmax.max= arr[1];
            minmax.min= arr[0];
        }else{
            minmax.max= arr[0];
            minmax.min= arr[1];
        }
        i = 2; //start loop from 2nd index 
    }else{

        minmax.max= arr[0];
        minmax.min = arr[0]; 
        i = 1 ; //start loop from 1st index
    }


    while(i < n-1 ){
        if (arr[i] > arr[i + 1])         
        { 
            if(arr[i] > minmax.max)     
                minmax.max = arr[i]; 
                
            if(arr[i + 1] < minmax.min)         
                minmax.min = arr[i + 1];     
        } 
        else        
        { 
            if (arr[i + 1] > minmax.max)     
                minmax.max = arr[i + 1]; 
                
            if (arr[i] < minmax.min)         
                minmax.min = arr[i];     
        }

        i +=2;  
    }
    return minmax; 
}
 
int main()
{

    int arr[] = {3,5,4,1,9};
    //Max Element is 9 
    //Min element is 1

    cout <<"Max Element is "<<maxElement(arr, 5)<<endl; 
    cout <<"Min Element is "<<minElement(arr, 5)<<endl; 


    Pair minmax = getMinMax(arr, 5); 

    cout << "Minimum element is "<< minmax.min << endl; 
    cout << "Maximum element is "<< minmax.max; 

 
    return 0;
}