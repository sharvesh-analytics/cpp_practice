// make a calculator by using switch operator

// first we have to solve with if else case

// #include <iostream>
// using namespace std;
// int main(){
//     int n1;
//     cin>>n1;
//     char op;
//     cin>>op;
//     int n2;
//     cin>>n2;
//     if(op=='+') cout<<n1+n2;
//     if(op=='-') cout<<n1-n2;
//     if(op=='*') cout<<n1*n2;
//     if(op=='/') cout<<n1/n2;
// }



// BY USING SWITCH CASE

#include <iostream>
using namespace std;
int main(){
    int n1;
    cin>>n1;
    char op;
    cin>>op;
    int n2;
    cin>>n2;
    switch(op){
        case '+':
        cout<<n1+n2<<endl;
        break;
        case '-':
        cout<<n1-n2<<endl;
        break;
        case '*':
        cout<<n1*n2<<endl;
        break;
        case '/':
        cout<<n1/n2<<endl;
        break;
        default:
        cout<<"invalide syntax"<<endl;
    }
}
