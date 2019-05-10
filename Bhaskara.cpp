#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
 
int main() {
double A,B,C,R1,R2,delta;

cin>>A>>B>>C;

delta = pow(B,2)-4*A*C;

if(delta<0 || A==0){
cout<<"Impossivel calcular"<<endl;
}else{
R1 = (-1*B + sqrt(delta))/(2*A);

R2 = (-1*B - sqrt(delta))/(2*A);

cout<<fixed<<setprecision(5);
cout<<"R1 = "<<R1<<endl;
cout<<"R2 = "<<R2<<endl;

}
    
    return 0;
