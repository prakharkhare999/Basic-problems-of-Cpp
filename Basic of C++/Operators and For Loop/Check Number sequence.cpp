// You are given S, a sequence of n integers i.e. S = s1, s2, ..., sn. Compute if it is possible to split S into two parts : s1, s2, ..., si and si+1, si+2, ….., sn (0 <= i <= n) in such a way that the first part is strictly decreasing while the second is strictly increasing one.
// Note : We say that x is strictly larger than y when x > y.
// So, a strictly increasing sequence can be 1 4 8. However, 1 4 4 is NOT a strictly increasing sequence.


// That is, in the sequence if numbers are decreasing, they can start increasing at one point. Thereafter, they cannot decrease at any point further.
#include<iostream>
using namespace std;

int main() {
int n;
cin>>n;
int arr[n];
int i=0;
while(i<n)
{
cin>>arr[i];
i++;
}
int comparearray[n-1];
for(int j=0;j<n-1;j++)
{
comparearray[j]=arr[j]-arr[j+1];
if(comparearray[j]==0)
{
cout<<"false";
return 0;
}
}
int count=0;
for(int k=0;k<n-2;k++)
{

   if((comparearray[k]>0 && comparearray[k+1]<0)||(comparearray[k]<0 && comparearray[k+1]>0))
   {
       count++;
   }
   
}
if(count>=2)
{
    cout<<"false";
}
else
{
    cout<<"true";
}
}