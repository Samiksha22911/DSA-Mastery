/*
======================================================================
Problem    : Maximum Product Subarray
Problem No.: 152
Platform   : LeetCode
Difficulty : Medium

Description:
Given an integer array nums, find the contiguous non-empty
subarray within the array that has the largest product,
and return that product.

Example:

Input : [2,3,-2,4]
Output: 6

Input : [-2,0,-1]
Output: 0

Link:
https://leetcode.com/problems/maximum-product-subarray/

----------------------------------------------------------------------
Why This Problem Matters

This problem strengthens your understanding of arrays,
nested loops, optimization techniques, and dynamic programming.
It also teaches how negative numbers and zeros affect the
product of a subarray, making it different from the classic
Maximum Sum Subarray problem.

----------------------------------------------------------------------
Real-World Applications

The concept of finding the maximum product over a continuous
range can be applied in:

• Financial profit and loss analysis
• Stock market trend evaluation
• Performance analysis over continuous time periods
• Signal processing
• Data analytics and optimization

======================================================================
Approach 1 : Brute Force (Three Nested Loops)

Idea:
Generate every possible contiguous subarray. Compute the
product of each subarray separately and keep track of the
maximum product encountered.

Algorithm:
1. Select every possible starting index.
2. Select every possible ending index.
3. Compute the product of all elements in that subarray.
4. Update the maximum product.

Time Complexity : O(n³)
Space Complexity: O(1)

Approach 2 : Optimized Brute Force

Idea:
Instead of recalculating the product for every subarray,
maintain a running product while extending the subarray.

Algorithm:
1. Choose a starting index.
2. Initialize the current product as 1.
3. Extend the subarray one element at a time.
4. Update the running product.
5. Update the maximum product whenever necessary.

Time Complexity : O(n²)
Space Complexity: O(1)


======================================================================
*/

#include <iostream>
#include <climits>
using namespace std;

int subarrayProduct(int* arr, int n){
    int maxProduct = INT_MIN;
    for(int i = 0; i < n ; i++){
        for(int j = i ; j < n ; j++){
            int currProduct = 1;
            for(int k = i; k <= j ; k++){
                currProduct =  currProduct * arr[k];
            }
       maxProduct = max(maxProduct,currProduct);
        }
    }
    return maxProduct;
}

int subarrayProduct2(int* arr, int n){
    int maxProduct = INT_MIN;
    for(int i = 0; i < n ; i++){
           int currProduct = 1;
        for(int j = i ; j < n ; j++){
           currProduct =  currProduct * arr[j];
           maxProduct = max(maxProduct,currProduct);
        }
    }
    return maxProduct;
}

int main() {
    int n ; 
    int arr[] = {-3,-1,-1} ;
    n = sizeof (arr) / sizeof (int);
    cout <<"maximum subarray product - "<< subarrayProduct(arr , n)<<endl;
    cout <<"maximum subarray product - "<< subarrayProduct2(arr , n)<<endl;
    cout <<"maximum subarray product - "<< subarrayProduct3(arr , n)<<endl;

    return 0;
}