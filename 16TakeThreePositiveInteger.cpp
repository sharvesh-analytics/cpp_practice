// QUESTION:take three positive integers input and print leastof them

#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"the 1st positive integer a: ";
    cin>>a;
    int b;
    cout<<"the 2nd positive integer b: ";
    cin>>b;
    int c;
    cout<<"the 3rd positive integer c: ";
    cin>>c;
    if(a<=b && a<=c ){
        cout<<"A is least value: ";
    }
    else if( b<=a && b<=c ){
        cout<<"B is least value: ";
    }
    else {
        cout<<"C is least value:";
    }
}
    