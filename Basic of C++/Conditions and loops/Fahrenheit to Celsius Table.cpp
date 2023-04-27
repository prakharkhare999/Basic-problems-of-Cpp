// Given three values - Start Fahrenheit Value (S), End Fahrenheit value (E) and Step Size (W), you need to convert all Fahrenheit values from Start to End at the gap of W, into their corresponding Celsius values and print the table.
#include<iostream>
using namespace std;
int main(){
    int S,E,W;
    cin>>S>>E>>W;
    while(S<=E){
        int c=5.0/9*(S-32);
        cout<<S<<" "<<c<<endl;
        S=S+W;
    }
    return 0;
}
