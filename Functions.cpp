// Instead of writing the same code again and again, we create a function and use it whenever needed. 
// kaam ki bate: main() ek hi baar aata hai=hm main function ko sirf ek hi baar use kr skte hai 
// start with main()=hmesha code run hone ke liye main se start hota hai 
// unlimited functions=hm unlimited function use kr skte hai functons ke dwara

#include <iostream>
using namespace std;
void usa(){
    cout<<"You are in USA"<<endl;
    return;
    cout<<"You are in USA"<<endl;

}
void india(){
    cout<<"Your are in India"<<endl;
}
int main(){
    usa();
    india();
}