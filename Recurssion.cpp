// Recurssion::recurssion ka mtlb hai for loop ki replacemet aur koi bdi problem ko ek chote se problem se solve krna

// Question::Print n to 1 or 1 to n

// #include <iostream>
// using namespace std;
// void print(int x,int n){
//     if(x>n) return;
//     cout<<x<<endl;
//     print(x+1,n);
// }
// int main(){
//     int n;
//     cout<<"enter n: ";
//     cin>>n;
//     print(1,n);
// }

#include <iostream>
using namespace std;
void print(int n){
    if(n==0) return;
    //  print(n-1);// 1 to n
    cout<<n<<endl;
    print(n-1); // n to 1
}
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    print(n);
}