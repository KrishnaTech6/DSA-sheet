#include<iostream>
using namespace std;
//Sliding Window approach 
// https://www.geeksforgeeks.org/chocolate-distribution-problem/

int minChocolateDistribution(vector<int>&arr, int m){
    sort(arr.begin(), arr.end()); 
    int minDiff = INT_MAX; 
    for (int i =0 ; i< arr.size()-m+1; i++){
        int min = arr[i+m-1]- arr[i]; 
        if(min<minDiff){
            minDiff= min; 
        }
    }
    return minDiff; 
}
 
int main()
{

    vector<int > arr= {7, 3, 2, 4, 9, 12, 56}; 
    cout << minChocolateDistribution(arr, 5)<<endl;
 
    return 0;
}