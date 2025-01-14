#include<iostream>
#include<vector>
using namespace std;
//Kadane's Algorithm 
// https://www.youtube.com/watch?v=AHZpyENo7k4
int maxSubArray(int nums[] , int n ) {
        int maxSum = INT_MIN; 
        int sum =0 ; 
        for (int i =0 ; i< n ; i++){
            sum += nums[i];
            maxSum = max(sum , maxSum); 
            if(sum<0) sum=0 ; 
        }
        return maxSum; 
    }

int maxSubArrayIs(int nums[] , int n, int &isStart, int &isEnd ) {
        int maxSum = INT_MIN; 
        int sum =0 ; 
        int start; 
        for (int i =0 ; i< n ; i++){
            if(sum ==0 ) start=i; 
            sum += nums[i];
            if(sum> maxSum){
                maxSum= sum ; 
                isStart= start ; 
                isEnd=i ; 
            }
            if(sum<0) sum=0 ; 
        }
        return maxSum; 
 }

 
int main()
{
    int arr[]= {-2,1,-3,4,-1,2,1,-5,4};
    int n = sizeof(arr)/sizeof(arr[0]); 

    int isStart = -1, isEnd = -1  ;

    cout<<"The sum is "<<maxSubArray(arr, n )<<endl; 

    //To find the subarray
    cout<<maxSubArrayIs(arr, n , isStart, isEnd)<<endl ; 
    cout<<isStart<<" "<<isEnd <<endl; 
 
    return 0;
}