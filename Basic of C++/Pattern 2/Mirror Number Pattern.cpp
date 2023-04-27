// Print the following pattern for the given N number of rows.
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
        int spaces=1;
        while(spaces<=n-i){
            cout<<" ";
            spaces++;
            
            
        }
        int j=1;
        int val=1;
        while(j<=i){
            cout<<val;
            j++;
            val++;
            
        }
        cout<<endl;
        i++;
            
    }
    
}


