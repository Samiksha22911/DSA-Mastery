/*
======================================================================
Problem    : Contains Duplicate
Problem No.: 217
Platform   : LeetCode
Difficulty : Easy

Description:
Given an integer array nums, return true if any value appears
at least twice in the array, and return false if every element
is distinct.

Example:
Input : [1,2,3,1]
Output: true

Input : [1,2,3,4]
Output: false

Link:
https://leetcode.com/problems/contains-duplicate/

----------------------------------------------------------------------
Why This Problem Matters

This problem introduces duplicate detection and helps build an
understanding of searching techniques, nested loops, and efficient
data structures like hash sets.

----------------------------------------------------------------------
Real-World Applications

• Detecting duplicate user IDs
• Finding repeated records in databases
• Data validation and cleaning
• Fraud detection systems
• Inventory management

======================================================================
Approach 1 : Brute Force (Nested Loops)

Idea:
Compare every element with all the elements that come after it.
If two elements are equal, a duplicate exists.

Algorithm:
1. Traverse the array.
2. Compare the current element with every remaining element.
3. If a duplicate is found, return true.
4. Otherwise, return false after all comparisons.

Time Complexity : O(n²)
Space Complexity: O(1)

======================================================================
*/

#include <iostream>
using namespace std;

bool ContainsDuplicate(int arr[], int n){
    for(int i = 0; i < n; i++){
        for(int j = i+1 ; j < n; j++){
            if(arr[i] == arr[j]){
             return true;
            }
        }
    }
    return false;
}

int main() {
    int size;
    int marks[] = {1,2,3,4,5,2,3,6,7} ;
    size = sizeof (marks)/sizeof (int) ;
    if (ContainsDuplicate(marks, size))
    cout << "True";
    else
    cout << "False";
    return 0;
}