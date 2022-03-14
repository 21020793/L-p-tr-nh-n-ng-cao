#include <bits/stdc++.h>
using namespace std;

double calculate (double num1, char operat, double num2)
{
    switch (operat)
    {
        case '+' :
        {
            return num1 + num2;
        }
        case '-' :
        {
            return num1 - num2;
        }
        case '*' :
        {
            return num1 * num2;
        }
        case '/' :
        {
            return num1 / num2;
        }
        default: 
            return 0;
        
    }
}

int main(){
	double a, b;
	char op;
	cin >> a >> op >> b;
	cout << fixed << setprecision(2) << calculate (a, op, b);
}
