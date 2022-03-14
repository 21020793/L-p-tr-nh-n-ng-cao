#include <bits/stdc++.h>

std::string pigLatin(std::string word){
    std::string ch = "aeoiu";
    char str = word[0];
    bool isConsonant = true;
    for (int i = 0; i < 5; i++){
        if (word[0] == ch[i]) isConsonant = false;
    }
    if (isConsonant){
        word.erase(word.begin() + 0);
        word = word + str + "ay";
    }
    else{
        word = word + "way";
    }
    return word;
}

int main(){
	std::string word;
	std::cin >> word;
	std::cout << pigLatin(word);
}
