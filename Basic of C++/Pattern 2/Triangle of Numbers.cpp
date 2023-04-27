// Print the following pattern for the given number of rows.
// Pattern for N = 4



// The dots represent spaces.
#include <iostream>
using namespace std;

int main() {
    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int space =1;
        while(space<=n-i){
            cout<<" ";
            space++;
            
        }
        int j=1;
        while(j<=i){
            cout<<i+j-1;
            j++;
        }
        j=i-1;
        while(j>=1){
            cout<<i+j-1;
            j=j-1;
        }
        
        
        cout<<endl;
        i++;
        
    }
}
