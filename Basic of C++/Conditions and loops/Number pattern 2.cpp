// Print the following pattern
// Pattern for N = 4


// The dots represent spaces.
#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
  int i=1;
    int n;
   // int val=1;
    cin>>n;
    while(i<=n){
         int k=1;
       int val=i;
        
     
        while(k<=n-i){
            cout<<" ";
            k=k+1;
        }
             int j=1;
            while(j<=i){
               
              cout<<val;
                j=j+1;
                val=val+1;

                
            }
        cout<<endl;
    i=i+1;
        }
          
    }
  


