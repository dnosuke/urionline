#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
double N1,N2,N3,N4,exame,media;

cin>>N1>>N2>>N3>>N4;
media = (N1*2 + N2*3 + N3*4 + N4*1)/10;

cout<<fixed<<setprecision(1);
    cout<<"Media: "<<media<<endl;
    
    if(media>=7){
    cout<<"Aluno aprovado."<<endl;
}else{
if(media<5){
cout<<"Aluno reprovado."<<endl;
}else{
cout<<"Aluno em exame."<<endl;
cin>>exame;
cout<<"Nota do exame: "<<exame<<endl;

media = (media+exame)/2;

if(media<5){
cout<<"Aluno reprovado."<<endl;
}else{
cout<<"Aluno aprovado."<<endl;
}

cout<<"Media final: "<<media<<endl;
}
}
    
    return 0;
