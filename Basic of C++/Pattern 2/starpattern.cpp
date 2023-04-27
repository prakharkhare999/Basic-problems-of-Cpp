// Print the following pattern
// Pattern for N = 4

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
       int  sp=1;
        while(sp<=n-i)
        {
            cout<<" ";
            sp++;
        }
        int j=1;
        while(j<=i){
            cout<<'*';
            j++;
        }
        j=i-1;
    while(j>=1){
        cout<<'*';
        j=j-1;
    }cout<<endl;
        i++;
        
        
    }  
}


