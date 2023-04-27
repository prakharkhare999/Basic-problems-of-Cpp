// Nth term of Fibonacci series F(n), where F(n) is a function, is calculated using the following formula -
//     F(n) = F(n-1) + F(n-2), 
//     Where, F(1) =  1, 
//            F(2) = 1
#include <iostream>
using namespace std;

int fib(int n)

{
	if (n <= 1)	//stopping condition

		return n;

	else	//recursive part

		return (fib(n - 1) + fib(n - 2));

}

int main()

{
	int n;

	

	cin >> n;

	cout << fib(n);

}