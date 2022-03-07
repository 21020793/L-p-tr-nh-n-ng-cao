#include <bits/stdc++.h>

using namespace std;

int main(){
    int total, totalLegs;
    cin >> total >> totalLegs;
    bool flag = false;
    int  numChicken;
    for (numChicken = 1; numChicken < total; numChicken++){
        if(numChicken*2+(total-numChicken)*4 == totalLegs) {
            flag = true;
            break;
        }
    }
    if (flag) cout << "chicken = " << numChicken << "," << " dog = " << total - numChicken;
    else cout << "invalid";
}
