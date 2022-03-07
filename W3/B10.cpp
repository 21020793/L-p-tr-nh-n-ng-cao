#include <iostream>
#include <cctype>
bool isValid(std::string str){
	int counts = 0;
    if (str.length() < 6 || str.length() > 15){
        return false;
    }
    if (str[0] >= '0' && str[0] <= '9'){
        return false;
    }
 
    for (int i = 0; i < str.length(); i++){
        if (isalpha(str[i]) || isalnum(str[i])) counts++;
    }
	if (counts == str.length()) return true;
	else return false;
   
}


int main(){
    std::string userName;
    std::cin >> userName;
    if (isValid(userName)){
        std::cout << "Valid username.";
    }else std::cout << "Invalid username.";
}
