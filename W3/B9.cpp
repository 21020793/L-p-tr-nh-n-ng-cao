#include <iostream>
#include <string>

int main(){
    std::string str;
    getline(std::cin, str);
    int i = 0;
    for (int j = 0; j < str.length(); j++){
        if (str[j] == ' '){
            std::cout << str[j];
            i++;
        } else break;
    }
    while (i < str.length()){
        if(str[i-1] == ' ' && str[i] == ' '){
            i++;
            continue;
        }else {
            std::cout << str[i];
            i++;
        }
    }
}
