#include <bits/stdc++.h>
 
 using namespace std;
 
 int main(){
     int x;
     cin >> x;
     
     double sum=1;
     double oldsum=0;
     double mu_x =1;
     double giaithua_x =1;
     
     int i = 1;
     do{
         oldsum = sum;
         mu_x *= x;
         giaithua_x *= i;
         sum+=mu_x / giaithua_x;
         i++;
     }
     while (sum-oldsum > 0.001);
     
     cout << fixed << setprecision(4) << sum;
     
     
 }
