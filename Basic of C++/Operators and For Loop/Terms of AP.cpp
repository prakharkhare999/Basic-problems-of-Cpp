// Write a program to print first x terms of the series 3N + 2 which are not multiples of 4.
#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n,ap;
    int count=0;
    cin>>n;
    for(int i=1;count<n;i++){
        ap=(3*i)+2;
        if(ap%4!=0){
           cout<<ap<<" ";
            count++;
            
        }
        
        
        
    }
}
