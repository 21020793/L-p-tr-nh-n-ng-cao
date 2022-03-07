#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int p = ceil(sqrt(a)), q = sqrt(b);
    for (int i = p; i <= q; i++){
            cout << i*i << " ";
    }
}
