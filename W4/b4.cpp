#include <bits/stdc++.h>

long long int factorial(int n)
{
    if (n == 0) return 1;
    return factorial(n-1) * n;
}

int main(){
	int n;
	std::cin >> n;
	long long int ans = factorial(n);
	std::cout << ans;
}
