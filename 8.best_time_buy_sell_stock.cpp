#include<iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int>& prices) {  //7,1,5,3,6,4
        int mini = prices[0];  //7
        int maxProfit = 0 ; 
        int n = prices.size(); 
        for (int i = 1; i<n ; i++){
            int cost = prices[i] - mini;  // -6 4 2 5 3 
            maxProfit = max(maxProfit, cost);// 0 4 4 5 5 <- Ans 5
            mini = min(mini, prices[i]);  // 1 1 1 1 1
        }
        return maxProfit; 
    }
 
int main()
{
    vector<int> arr = {7,1,5,3,6,4};
    cout << "Maximum profit is " << maxProfit(arr)<<endl; 

 
    return 0;
}