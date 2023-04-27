// Write a program to find x to the power n (i.e. x^n). Take x and n from the user. You need to print the answer.
// Note : For this question, you can assume that 0 raised to the power of 0 is 1
#include<iostream>
#include<cmath>
using namespace std;

int main() {
	// Write your code here
	int x,n,y;
    cin>>x>>n;
    y=pow(x,n);
    cout<<y;
}
