// Given a number N, print sum of all even numbers from 1 to N.
#include<iostream>
using namespace std;
int main(){

       	/*  
		Read input as specified in the question.
		Print output as specified in the question.
	*/
    int n;
    int i=2;
    int sum=0;
    cin>>n;
    while(i<=n){
          if(i%2==0){
        sum=sum+i;
                i=i+2;
        
    }
        

    }
  
    cout<<sum;
}