#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++){
        cin >> array[i];
    }
    bool isSym = true;
    for (int k = 0; k < n/2; k++) {
    if ( array[k] == array[n-1-k] ){
        continue;
    } else {
        isSym = false;
    }
    }
    if (isSym) cout << "Symmetric array.";
    else cout << "Asymmetric array.";
}
