// QUESTION: take 3 number input and tells if they can we sides of a triangle


#include <iostream>
using namespace std ;
int main(){
    int a;
    cout<<"the 1st side: ";
    cin>>a;
    int b;
    cout<<"the 2nd side: ";
    cin>>b;
    int c;
    cout<<"the 3rd side: ";
    cin>>c;
    if (a+b>c and b+c>a and c+a>b){
        cout<<"they will be sides of triangle: ";
    
    }
    else{
        cout<<"the sides of triangle is not equal: ";
    }
}