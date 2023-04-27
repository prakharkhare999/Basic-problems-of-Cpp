// Given a number N, figure out if it is a member of fibonacci series or not. Return true if the number is member of fibonacci series else false.
// Fibonacci Series is defined by the recurrence
//     F(n) = F(n-1) + F(n-2)
// where F(0) = 0 and F(1) = 1

bool checkMember(int n){

  /* Don't write main().
   * Don't read input, it is passed as function argument.
   * Return output and don't print it.
   * Taking input and printing output is handled automatically.
  	*/
    
int a=0,b=1;
   
	while(true){
        int c=a+b;
        if(c==n){
            return true;
        }
        if(n==0){
            return true;
        }
        if(c>n){
            return false;
        }
        a=b;
        b=c;
    }

}
