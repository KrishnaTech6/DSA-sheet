#include<iostream>
#include <vector>
using namespace std;

//Binary Search with pivot

// https://www.youtube.com/watch?v=6z2HK4o8qcU&list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA&index=14

//leetcode : https://leetcode.com/problems/search-in-rotated-sorted-array/description/


    int getPivot(vector<int>&nums ){
        int n = nums.size(); 
        int s = 0 ; 
        int e = n-1 ;
        int mid= s + (e-s)/2;
        while(s<e){
            if(nums[mid]>= nums[0] ){
                s= mid+1;
            }else{
                e=mid; 
            }
            mid = s + (e-s)/2; 
        }
        return s ; 

    }

    int binarySearch(vector<int>&arr,int s , int e, int k ){
        int mid = s + (e-s)/2; 

        while(s<= e){
            if(arr[mid]==k){
                return mid; 
            }else if (k>arr[mid]){
                s= mid +1; 

            }else {e = mid-1; }

            mid = s + (e-s)/2; 
        }
        return -1 ; 
    }
    
    int search(vector<int>& nums, int target) {
        int pivot = getPivot(nums); 
        int n = nums.size();
        if(target>= nums[pivot]&& target<=nums[n-1]){
            return binarySearch(nums, pivot, n-1 , target);
        }else {
            return binarySearch(nums, 0, pivot-1 , target);
        }
    }

 
int main()
{
    vector<int > arr = {4,5,6,7,0,1,2}; 
    cout << search(arr,0)<<endl; 
 
    return 0;
}