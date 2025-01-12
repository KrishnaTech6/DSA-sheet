#include<iostream>
using namespace std;

void swap(int *a , int *b){
    int *temp = a ; 
    a = b; 
    b= temp; 
}
 
int main()
{
    int arr[]={2,3,4,5,6}; 
    int n= 5, i= 0 ; 
    while(i<n/2){
        swap(*(arr+i) , *(arr + n-i-1)); 
        i++; 
    }
    
    for(int element: arr){
        cout<< element<<" " ;
    }
 
    return 0;
}