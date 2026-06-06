// write  program the sum of given number and its reverse 


#include <iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter a number: ";
    cin>>n;
    int original=n;
    int r=0;
    while(n!=0){

        int digit=n%10;
        r=r*10+digit;
        n=n/10;
        
    }
     int sum=original+r;
    cout<<r <<endl;
    cout<<sum;
}