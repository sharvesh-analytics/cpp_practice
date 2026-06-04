// QUESTION:the ticket price based on a customer's age
// standard price:$12
// children age(under 12 and under):$8
// senior(age 60 and over):$7
// matinee discount:if the movie is before 17:00(5pm)everyone gets an additional $2 off ther calculated price (regardless of age0

#include <iostream>
using namespace std;
int main(){
    int age ,hour;
    int prize=12;
    cout<<"movie ticket threater system: "<<endl;
    cout<<"enter customer age: "<<endl;
    cin>>age;
    cout<<"enter movie hour: ";
    cin>>hour;

    if(age<=12){
    prize=8;
    }
    if(age<=60){
        prize=7;
    }
    else{
        prize=12;
    }
    if(hour<17){
        prize-=2;
        cout<<"matinee discount applied: $"<<prize<<endl;
    }
    else{
    cout<<"the final ticket prize is:$"<<prize<<endl;
 }            
    

}