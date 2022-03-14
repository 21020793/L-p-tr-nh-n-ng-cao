#include <bits/stdc++.h>

using namespace std;

int maxThree(int a, int b, int c){
    if (a > b){
        return a > c ? a : c;
    } else return b > c ? b : c;
}

int main(){
	int a, b, c;
	cin >> a >> b >> c;
	cout << maxThree(a, b, c);
}
