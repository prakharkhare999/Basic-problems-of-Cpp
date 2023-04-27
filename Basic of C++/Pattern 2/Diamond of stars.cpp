// Print the following pattern for the given number of rows.
// Note: N is always odd.


// Pattern for N = 5







#include<iostream>

using namespace std;

int main()

{
    int i=1,j,n;
    cin>>n;
    while(i<=(n/2+1))
    {
        int k=1;
        while(k<=((n/2+1)-i))
        {
            cout<<" ";
            k=k+1;
        }
        j=1;
        while(j<=(2*i-1))
        {
            cout<<"*";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    i=1;
    while(i<=(n/2))
    {
        int z=1;
        while(z<=i)
        {
            cout<<" ";
            z=z+1;
        }
        j=n-2*i;
        while(j>=1)
        {
            cout<<"*";
            j=j-1;
        }
        cout<<endl;
        i=i+1;
    }
    
    return 0;
}
