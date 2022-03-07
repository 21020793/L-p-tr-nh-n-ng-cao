#include <iostream>
#include <vector>
#include <algorithm>

bool isValid(int a, int b){
    if (a != b){
        return false;
    } else return true;
}


bool check (std::vector <int> &vect1, std::vector <int> &vect2){
    std::sort(vect1.begin(), vect1.end());
    std::sort(vect2.begin(), vect2.end());
    
    for (int i = 0; i < vect1.size(); i++){
        if (vect1[i] != vect2[i]){
            return false;
        }
    }
     return true;
}

int main(){
    int n;
    std::cin >> n;
    std::vector <int> vect1;
    std::vector <int> vect2;
    for (int i = 0; i < n; i++){
        int a;
        std::cin >> a;
        vect1.push_back(a);
    }
    for (int i = 0; i < n; i++){
        int a;
        std::cin >> a;
        vect2.push_back(a);
    }
    if (isValid(vect1.size(), vect2.size())){
        if (check(vect1, vect2)){
            std::cout << "YES";
        } else std::cout << "NO";
    } else std::cout << "NO";
    
}
