// Write a program to count and print the total number of characters (lowercase english alphabets only), digits (0 to 9) and white spaces (single space, tab i.e. '\t' and newline i.e. '\n') entered till '$'.
// That is, input will be a stream of characters and you need to consider all the characters which are entered till '$'.
// Print count of characters, count of digits and count of white spaces respectively (separated by space).
#include<iostream>
using namespace std;

int main(){

    /* Read input as specified in the question.
	 * Print output as specified in the question.
	 */
   char c;
    int count=0,count1=0,count2=0;
    c=cin.get();
    while(c!='$'){
        if(c>=97&&c<=122){
            count++;
        }
        else if(c>=48&&c<=57){
          count1++;
        }
        else{
            count2++;
        }
     c=cin.get();
    }
    cout<<count<<" "<<count1<<" "<<count2;
}


