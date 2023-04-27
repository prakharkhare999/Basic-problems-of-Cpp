// Given a decimal number (integer N), convert it into binary and print.
// Note: The given input number could be large, so the corresponding binary number can exceed the integer range. So you may want to take the answer as long for CPP and Java.
// Note for C++ coders: Do not use the inbuilt implementation of "pow" function. The implementation of that function is done for 'double's and it may fail when used for 'int's, 'long's, or 'long long's. Implement your own "pow" function to work for non-float data types.

 /*#include<iostream>
 using namespace std;

 int main() {
 	// Write your code here
 	int n;
     cin>>n;
     long rem=0,pv=1,ans=0;
     while(n>=1)
     {
         rem=n%2;
         ans=ans+rem*pv;
         pv=pv*10;
         n=n/2;
     }
     cout<<ans;
 }*/

#include<iostream>
#include<math.h>
using namespace std;

int main() {
	// Write your code here
	int i=0,ans=0,n;
    cin>>n;
    while(n!=0){
        int bit=n&1;
        ans=(bit*pow(10,i)+ans);
        n=n>>1;
        i++;
    }
    cout<<ans<<endl;
}
