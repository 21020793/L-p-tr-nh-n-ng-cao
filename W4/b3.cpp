#include <bits/stdc++.h>


void printArrow(int n, bool left){
	if (left)
	{
		//upper part
		for (int i = n; i > 0; i--)
		{
			for (int j = i; j > 1; j--)  	std::cout << " ";
			for (int x = i; x > 0; x--)		std::cout << "*";
			std::cout << "\n";
		}
		
		// lower part
		
		for (int i = 2; i <= n; i++)
		{
			for(int j = i-1; j > 0; j--)		std::cout << " ";
			for(int x = i; x > 0; x--)		std::cout << "*";
			std::cout << "\n";
		}
	}
	
	else 
	{
		// upper part
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j < i; j++)		std::cout << "  ";
			for (int x = i; x <= n; x++)	std::cout <<  "*";
			std::cout << "\n";
		}	
		
		// lower part
		
		for (int i = 2; i <= n; i++)
		{
			for (int j = n - i; j > 0; j--)		std::cout << "  ";
			for (int x = i; x > 0; x--)			std::cout << "*";
			std::cout << "\n";
		}
	}
}

int main(){
	int n, left;
	std::cin >> n >> left;
	printArrow(n, left);
}
