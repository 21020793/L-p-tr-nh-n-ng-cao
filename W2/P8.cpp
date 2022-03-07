#include <iostream>
#include <cmath>

using namespace std;

int main(){
    long long n;
    int count = 0;
    cin >> n;
    do{
        n = n / 10;
        count ++;
    }
    while (n != 0);
    cout << count;
}
