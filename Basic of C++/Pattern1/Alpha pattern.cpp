// Print the following pattern for the given N number of rows.
// Pattern for N = 3
//  A
//  BB
//  CCC
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
            while(j<=i)
            {
                char ch='A'+i-1;
                cout<<ch;
                j++;
            }
        cout<<endl;
        i++;
    }
    
}

