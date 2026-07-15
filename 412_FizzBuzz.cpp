/*
============================================================
Problem : Fizz Buzz
Platform: LeetCode
link: https://leetcode.com/problems/fizz-buzz/
Difficulty: Easy

Description:
Print numbers from 1 to n.
- "Fizz" for multiples of 3
- "Buzz" for multiples of 5
- "FizzBuzz" for multiples of both

Real-world Analogy:
Rule-based systems such as notification engines,
discount systems, and task scheduling often apply
multiple conditions before deciding an action.

------------------------------------------------------------
Approach 1: Modulus Operator

Idea:
Check divisibility using %.

Time Complexity : O(n)
Space Complexity: O(1)

------------------------------------------------------------
----------------------------------------------------------
Approach 2: Counter Method

Time Complexity: O(n)
Space Complexity: O(1)

Explanation:
Instead of checking divisibility using the modulus operator,
we maintain two counters for multiples of 3 and 5.
----------------------------------------------------------

============================================================
*/

#include <iostream>
using namespace std;
int main(){
    int n ; 
    cout<<"enter a number : ";
    cin>>n;

    //Approach 1: Modulus Operator

    for(int i=1; i<=n;i++){
        if(i % 3 ==0 && i % 5 ==0){
            cout<<"fizzBuzz"<<endl;  
        }
        // if(i % 15 ==0){ //optimization
        //     cout<<"fizzBuzz"<<endl;  
        // }
        else if(i % 3 ==0){
            cout<<"fizz"<<endl;       
        }
        else if(i % 5 == 0){
            cout<<"Buzz"<<endl;     
        }
        else{
            cout<<i<<endl;
        }
    }

    //Approach 2: Counter Method

    int counter_1 = 0;
    int counter_2 = 0;
    for(int i=1; i<= n; i++){
        counter_1++;
        counter_2++;
        if(counter_1 == 3 && counter_2 == 5){
            cout<<"fizzBuzz"<<endl;
            counter_1 = 0;
            counter_2 = 0;
        }
        else if(counter_1 == 3){
            cout<<"fizz"<<endl;
            counter_1 = 0;
        } 
        else if(counter_2 == 5){
            cout<<"Buzz"<<endl;
            counter_2 = 0;
        }      
        else{
            cout<<i<<endl;
        }
       
    }

    return 0;
}
