#include<iostream>
using namespace std;

int main(){
    int sumeven=0,sumodd=0,a;
    cout << "Enter an integer: ";cin>>a;
    while(a!=0){
        if(a%2==0){sumeven++;}
        else{sumodd++;}
        cout << "Enter an integer: ";cin>>a;
    }
    cout << "#Even numbers = " << sumeven << "\n";
    cout << "#Odd numbers = " << sumodd;
    return 0;
}