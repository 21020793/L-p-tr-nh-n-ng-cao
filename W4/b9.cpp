#include <bits/stdc++.h>
using namespace std;

void sort(float array[], int size, bool isAscending)
{
    if (isAscending == false) 
    {
        std::sort(array, array+size, greater<float>());
    }
    else std::sort(array, array+size);
}

int main(){
	int n;
	int isAscend;
	cin >> n >> isAscend;
	float array[n];
	for (int i = 0; i < n; i++){
		cin >> array[i];
	}
	sort(array, n, isAscend);
	for (int i = 0; i < n; i++){
		cout << array[i];
	}
}
