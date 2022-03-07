#include <iostream>
#include <vector>

using namespace std;

void Check (int A[], int n, vector <int> &vect){
    vect.push_back(A[0]);
    int counts = 1;
    for (int i = 1; i < n; i++){
    	bool isLam = true;
            if (A[i] == vect[counts-1]){
            	isLam = false;
            }
        if(isLam){
        	vect.push_back(A[i]);
        	counts++;
		}
    }
}

int main(){
    int n;
    cin >> n;
    int A[n];
    vector<int> vect;
    for (int i = 0; i < n; i++){
        cin >> A[i];
    }
    Check(A, n, vect);
    for (int i : vect){
        cout << i << " ";
    }
}
