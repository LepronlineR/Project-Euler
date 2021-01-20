//By considering the terms in the Fibonacci sequence whose 
//values do not exceed four million, find the sum of the even-valued terms.

#include <iostream>
using namespace std;

int sum = 0;

int fib(int num){
    if(num%2 == 0)
        sum++;
    if(num <= 2)
        return 1;
    return fib(num-1) + fib(num-2);
}

int main(){
    fib(4000000);
    cout << sum;
    return 0;
}