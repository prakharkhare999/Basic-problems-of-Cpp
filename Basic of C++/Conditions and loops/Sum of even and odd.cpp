// Write a program to input an integer N and print the sum of all its even digits and sum of all its odd digits separately.
// Digits mean numbers, not the places! That is, if the given integer is "13245", even digits are 2 & 4 and odd digits are 1, 3 & 5.
#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n;
    int even=0,odd=0;
    cin>>n;
    
    
    while(n>0){
        int rem=n%10;
    	n=n/10;
        
        if(rem%2==0){
        	even=even+rem;
        }
        else {
        	odd=odd+rem;
        }
    }
    
    
    
   cout << even << " " << odd;
    

}
