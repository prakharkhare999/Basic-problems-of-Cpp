// Print the following pattern
// Pattern for N = 4
// 1
// 23
// 345
// 4567
#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
  int i=1;
    
    int n;
    int val=1;
    cin>>n;
    while(i<=n){
        val=i;
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


