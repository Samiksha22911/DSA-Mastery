/*
======================================================================
Problem    : Palindrome Number
Problem No.: 9
Platform   : LeetCode
Difficulty : Easy

Description:
Given an integer x, return true if x is a palindrome,
and false otherwise.

A palindrome integer reads the same forward and backward.
For example:
121  -> true
-121 -> false
10   -> false

Link:
https://leetcode.com/problems/palindrome-number/

Edge Cases:
- Negative integers are not palindromes.
- Numbers ending with 0 (except 0 itself) cannot be palindromes.

----------------------------------------------------------------------
Why This Problem Matters

This problem strengthens your understanding of number manipulation,
reverse operations, and edge-case handling without relying on
string conversion.

----------------------------------------------------------------------
Real-World Applications

The concept of palindrome checking is useful in:
• Data validation
• Pattern recognition
• String and number processing
• Error detection
• Algorithmic problem solving

======================================================================
Approach 1 : Reverse the Number

Idea:
Reverse the given integer using modulus (%) and division (/).
If the reversed number is equal to the original number,
then it is a palindrome.

Steps:
1. Store the original number.
2. Extract each digit using modulus (%).
3. Build the reversed number.
4. Compare the reversed number with the original.

Time Complexity : O(log₁₀ n)
Space Complexity: O(1)

----------------------------------------------------------------------
Approach 2 : Reverse Half of the Number

Idea:
Reverse only half of the digits instead of the entire number.
This avoids integer overflow and is the most optimized solution.

Time Complexity : O(log₁₀ n)
Space Complexity: O(1)

======================================================================
*/

#include <iostream>
using namespace std;
int main(){
    int n ; 
    int reversed_num = 0;
    cout<<"enter a number : ";
    cin>>n;
    int num = n;
      
//Approach 1 : Reverse the Number

    // Edge case: Negative numbers are not palindromes
    if (n < 0 || (n % 10 == 0 && n != 0)){
        cout << "Not Palindrome" << endl;
        return 0;
    }

    //Reversing the number
    while(num != 0){
        int digit = num % 10;
        reversed_num = reversed_num * 10 + digit;
        num = num / 10;
    }
    //Palindrome check
    if(n == reversed_num){
        cout<<"Palindrome"<<endl;  
    }
    else{
        cout<<"Not Palindrome"<<endl;
    }

//Approach 2 : Reverse Half of the Number

int reversedHalf = 0;
 // Edge case: Negative numbers are not palindromes
    if (n < 0 || (n % 10 == 0 && n != 0)) {
        cout << "Not Palindrome" << endl;
        return 0;
    }

    // Reversing half of the number
    while (n > reversedHalf) {
            int digit = n % 10;
            reversedHalf = reversedHalf * 10 + digit;
            n /= 10;
    }

    // Even length: x == reversedHalf
    // Odd length: x == reversedHalf / 10

    // Check for palindrome
    if (n == reversedHalf || n == reversedHalf / 10){
    cout << "Palindrome" << endl;
    }
    else{
    cout << "Not Palindrome" << endl;
    }

    return 0;
}

