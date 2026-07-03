// if else but cool bnne ke liye lines bachana

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the number";
//     cin>>n;
//     if(n%2==0)
//         cout<<"even number";
//     else
//         cout<<"odd number";
    
// }

// BUT IN TERNARY CONDITION
// experation1? experation2: experation3;
// condition      if true     if false

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    (n%2==0)? cout<<"even": cout<<"odd";
}