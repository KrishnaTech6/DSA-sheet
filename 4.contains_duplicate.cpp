#include<iostream>
#include<vector>
#include <unordered_map>

using namespace std;

//O(nlogn) approach

// bool containsDuplicate(vector<int>& nums) {
//         sort(nums.begin(), nums.end()); 
//         for(int i =0 ; i< nums.size()-1; i++ ){
//             if(nums[i]==nums[i+1]){
//                 return true;  
//             }
//         }
//         return false; 
//     }

//hashmap approach O(1)
bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> seen;
        for (int num : nums) {
            if (seen[num] >= 1)
                return true;
            seen[num]++;
        }
        return false;
    }

 
int main()
{
    vector<int> arr = {1,2,3,4,1};

    cout<<"Is Duplicate: "<<containsDuplicate(arr)<<endl; 
 
    return 0;
}