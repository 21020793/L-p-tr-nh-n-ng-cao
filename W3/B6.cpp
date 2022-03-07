#include <iostream>
#include <string>

using namespace std;

int main(){
    string sentence;
    int count = 0;
    getline(cin, sentence);
    sentence = " " + sentence;
    for (int i = 0; i < sentence.length(); i++){
        if (sentence[i] != ' ' && sentence[i-1] == ' '){
            count++;
        }
    }
    cout << count;
}
