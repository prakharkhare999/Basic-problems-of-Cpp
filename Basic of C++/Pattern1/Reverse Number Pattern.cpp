// Print the following pattern for the given N number of rows.
// Pattern for N = 4
// 1
// 21
// 321
// 4321
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
        while(j<=i){
            cout<<i-j+1;
            j++;
            
        }
        cout<<endl;
        i++;
        }
}


