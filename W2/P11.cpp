#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    const int MAX_N = 1000;
    int n; cin >> n;
    double arrayX[MAX_N];
    double sum = 0;
    for (int i = 0; i < n; i++){
        cin >> arrayX[i];
        sum+= arrayX[i];
    }
    double t = 0;
    double mean = sum / n;
    for (int i = 0; i < n; i++){
        t += (arrayX[i] - mean)*(arrayX[i] - mean);
    }
    cout << fixed << setprecision(2) <<  t / n;
}
