#include <bits/stdc++.h>

std::string  toLower (std::string s){
    for (int i = 0; i < s.size(); i++){
        if (isupper(s[i])) s[i] = tolower(s[i]);
    }
    return s;
}

int main(){
	std::string str;
	getline(std::cin, str);
	std::cout << toLower(str);
}
