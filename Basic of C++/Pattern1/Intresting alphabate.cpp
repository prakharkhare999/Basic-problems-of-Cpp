// Print the following pattern for the given number of rows.
// Pattern for N = 5
// E
// DE
// CDE
// BCDE
// ABCDE
#include<iostream>
using namespace std;


int main() {
    
    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            char ch='A'+n-1-i+j;
                cout<<ch;
            j++;
            
            
            
        }cout<<endl;
     i++;   
    }
}
