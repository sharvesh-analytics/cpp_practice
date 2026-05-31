// display this AP =4,7,10,13,16 upto 'n' term
// AP=2*n-1 formula

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    for( int i=1; i<=2*n-1; i+=2) 
    cout<<i<<endl;   
}