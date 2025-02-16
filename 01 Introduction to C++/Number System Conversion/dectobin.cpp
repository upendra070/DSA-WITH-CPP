#include<iostream>
#include<cmath>
using namespace std;
int decimalToBinary1(int n){
    //division method
    int binaryno=0;
    int i=0;
    int place=1;
    while(n>0){
        int bit=n%2;
        
        binaryno=bit*place+binaryno;
        place*=10;
        n=n/2;
    }
    return binaryno;
}
int main(){
     int dec;
     cout<<"entre the decimal number"<<endl;
     cin>>dec;
     cout<<decimalToBinary1(dec);

    return 0;
}