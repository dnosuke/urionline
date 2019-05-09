#include <iostream>
#include <math.h> 
#include <iomanip>
using namespace std;
 
int main() {
    double raio,A,q;
    double n=3.14159;
    cin>>raio;
    q=pow(raio,2);
    A = n*q;
    cout<<fixed<<setprecision(4);
    cout<<"A="<< A<<endl;
    
    return 0;
