#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    getline(cin, s);
    int alphaLets = 0;
    int numbers = 0;
    int other = 0;
    for (int i =0; i < s.length(); i++){
        if ((s[i] >= 'a' && s[i] <= 'z') ||(s[i] >= 'A' && s[i] <= 'Z')){
            alphaLets++;
        } else if (s[i] >= '0' && s[i] <= '9'){
            numbers++;
        } else other ++;
    }
    std::cout << alphaLets << " " << numbers << " " << other << endl;
}
