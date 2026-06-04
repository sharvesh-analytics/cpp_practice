// QUESTION:TAKE 3 POSITIVE INTEGERS INPUT AND PRINT THE GREATEST OF THEM


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
    if(a>=b && a>=c ){
        cout<<"A is greater value: ";
    }
    else if( b>=a && b>=c ){
        cout<<"B is greater value: ";
    }
    else if(c>=a and c>=b){
        cout<<"C is greater value:";
    }
    
    else{
        cout<<"this is not greater value: ";
    }
}