#include<iostream>
using namespace std;
int main(){
int num;
cin>>num;
if(num>=0 && num<=100){
switch(num/10){
case 9:
case 10:
    cout<<"A"<<endl;
    break;
case 8:
    cout<<"B"<<endl;
    break;
case 7:
    cout<<"C"<<endl;
    break;
case 6:
    cout<<"D"<<endl;
    break;
default:
    cout<<"F"<<endl;
}
}
else
    cout<<"Out of range"<<endl;
return 0;
}
