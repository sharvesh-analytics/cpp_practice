// write a program tp print reverse of given number 



#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int r=0;
    while(num!=0){
        int ld=num%10;
        r*=10;
        r+=ld;
        num=num/10;
        
    }
    cout<<r;


}