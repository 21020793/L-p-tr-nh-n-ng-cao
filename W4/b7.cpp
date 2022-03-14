#include <bits/stdc++.h>
using namespace std;

void readArray(int A[], int n){
    for (int i = 0; i < n; i++) cin >> A[i];
}

void printArray(int A[], int n){
    for (int i = 0; i < n; i++) cout << A[i] << " ";
}


int main(){
	int n;
	cin >> n;
	int a[n];
	readArray(a, n);
	printArray(a, n);
}
