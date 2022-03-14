#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n < 2) return false;
    if (n == 2 || n == 3) return true;
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0) return false;
    }
    return true;
}

int main(){
	int number;
	cin >> number;
	if(isPrime(number)){
    	cout << "Prime.";
	} else {
    	cout << "Not a prime.";
	}
}
