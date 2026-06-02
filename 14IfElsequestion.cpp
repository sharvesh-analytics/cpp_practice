//QUESTION:prize and selling prize of an item is input the keyboard write a
//  program to determine whether the seler has made profit or incurred loss
//  or not profit not loss. also detrmine how much profit he made or loss he incurred

// #include <iostream>
// using namespace std;
// int main(){
//     int cp;
//     cout<<"enter cost price: ";
//     cin>>cp;
//     int sp;
//     cout<<"enter selling price: ";
//     cin>>sp;
//     if(sp>cp){
//     cout<<"profit";
// }
//     if(cp>sp){
//     cout<<"loss";
// }
//     if(cp==sp){
//     cout<<"no profit no loss";
// }

// }
    

// #include <iostream>
// using namespace std;
// int main(){
//     int cp;
//     cout<<"enter cost price: ";
//     cin>>cp;
//     int sp;
//     cout<<"enter selling price: ";
//     cin>>sp;
//     if(sp>cp){
//     cout<<"profit";
// }
//     if(cp>sp){
//     cout<<"loss";
// }
//     if(cp==sp){
//     cout<<"no profit no loss";
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int cp;
//     cout<<"enter cost price: ";
//     cin>>cp;
//     int sp;
//     cout<<"enter selling price: ";
//     cin>>sp;
//     if(sp>cp){
//     cout<<"profit";
// }
//     else if(cp>sp){
//     cout<<"loss";
// }
//     else(cp==sp){
//     cout<<"no profit no loss";
// }

// QUESTION: given the lenght and the breath of a ractangl write a program to find whether the area of the ractangle is greater than its perameter

#include <iostream>
using namespace std;
int main(){
    float lenght , width;
    float area, perimeter;
    cout<<"lenght of the rectangle:";
    cin>>lenght;
    cout<<"width of the rectangle:";
    cin>>width;
    area=lenght*width;
    perimeter=2*(lenght+width);
     cout<<"area:";
     cout<<"perimeter:";
     if(area>perimeter){
        cout<<"area is greater than perimeter";
     }
     else if(area<perimeter){
        cout<<"area is smaller thn perimeter";

     }
   6  else
     cout<<"area is equal to the perimeter";

}