#include<iostream>
using namespace std;

int main(){
    int n=0,e=0,o=0,i=0;
    cout << "Enter an integer: ";
    cin >>n;
    while (n!=0){
        if(n%2==0){
            e=e+1;
        }else{
            o=o+1;
        }
    cout <<"Enter an integer: ";
    cin >> n;
    i++;
        }
    cout << "#Even numbers = "<<e<<"\n";
    cout << "#Odd numbers = "<<o;
    return 0;
}
