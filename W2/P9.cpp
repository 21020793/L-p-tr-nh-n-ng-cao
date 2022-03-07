#include <iostream>
#include <iomanip>
int main(){
    const int MAX_N = 1000;
    int n;
    std::cin >> n;
    double arrayX[MAX_N];
    for (int i = 0; i < n; i++){
        std::cin >> arrayX[i];
    }
    for (int i = n -1; i >=0; i--){
        std::cout << std::fixed << std::setprecision(2) << arrayX[i] << " ";
    }
}
