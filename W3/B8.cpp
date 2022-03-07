#include <iostream>
#include <string>


int main(){
    std::string str;
    std::getline(std::cin, str);
    int i = 0;
    while (i < str.length()){
        if(i > str.size() - 4 || str.substr(i, 4) != "Zues"){
            std::cout << str[i];
            i++;
        } else {
            std::cout << "Zeus";
            i+=4;
        }
    }
    
}
