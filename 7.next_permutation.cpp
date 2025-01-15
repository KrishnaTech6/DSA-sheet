#include<iostream>
#include <vector>
using namespace std;


// Leetcode : https://leetcode.com/problems/next-permutation/
// yt: https://www.youtube.com/watch?v=JDOXKqF60RQ

void nextPermutation(vector<int>& nums) {
        int ind = -1;
        int n = nums.size();
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                ind = i;
                break;
            }
        }
        if (ind == -1) {
            reverse(nums.begin(), nums.end());
            return;
        } else {
            for (int i = n - 1; i > ind; i--) {
                if (nums[i] > nums[ind]) {
                    swap(nums[i], nums[ind]);
                    break;
                }
            }
            reverse(nums.begin() + ind + 1, nums.end());
        }
    }

    void print(vector<int> arr){
        int n = arr. size(); 
        cout << "{ "; 
        for (int i =0 ; i< n ; i++){
            cout <<arr[i]<<", "; 
        }
        cout <<" }"<<endl ; 
    }
 
int main()
{
    vector<int> nums = {0,1,2,5,2,1,0}; 
    nextPermutation(nums); 
    cout << "next permutation is: "<< endl ; 
    print(nums);

    return 0;
}