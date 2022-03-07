#include <iostream>
#include <iomanip>
#include <algorithm>


int main(){
    int n;
    std::cin >> n;
    float A[n];
    for (int i = 0; i < n; i++){
        std::cin >> A[i];
    }
    std::sort (A, A + n, std::greater<float>());
    for (float i : A){
        std::cout << std::fixed << std::setprecision(2) << i << " ";
    }
}
