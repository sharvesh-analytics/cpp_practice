// QUESTION: write a while loop that user to nter a number between 1 to 10 if the user enter anythings else the program should keep asking until provide a valid number 

#include <iostream>
using namespace std;
int main(){
    int number=0;
    cout<<"enter the number 1 to 10: ";
    cin>>number;
    while(number<1 or number>10){
        cout<<"invalid! try again";
        cin>>number;

    }
    cout<<"success! you entered: "<<number;

}
