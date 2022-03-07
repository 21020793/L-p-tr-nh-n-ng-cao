#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,row,col,flag = -1;

	cin >> n;
	// for the upper part
	for (int x = -n; x <= 0; x++){
		flag ++;
		for (int y = -n; y <= n; y++){
			if (x+y >= -n && x+y <= x+flag){
				cout << "* ";
			} else cout <<". ";	
		}cout << endl;
	}
	// for the lower part
	flag = -n;
	for (int x = 1; x <= n; x++){
		flag++;
		for (int y = -n; y <= n; y++){
			if(x+y >= x+flag && x+y <= n){
				cout << "* ";
			} else cout <<". ";
		} cout << endl;
	}
}
