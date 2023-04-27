// Code : Square Pattern
// Send Feedback
// Print the following pattern for the given N number of rows.
// Pattern for N = 4
// 4444
// 4444
// 4444
// 4444
#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
           int j=1;
        while(j<=n){
            cout<<n;
            j=j+1;
            
        }
        cout<<endl;
        i=i+1;
        
    }
        
  
}


