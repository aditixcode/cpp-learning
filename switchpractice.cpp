#include <iostream>
using namespace std;
int main () {
    int choice {}, num1 {}, num2 {};
    cout<<"enter your two numbers";
    cin>>num1>>num2;
    cout<<"enter your choice";
    cin>>choice;
    switch (choice){
        case 1: 
        cout<<"1-add";
        cout<<num1+num2;
        break;
        case 2:
        cout<<"2-subtract";
        cout<<num1-num2;
        break;
        case 3:
        cout<<"3-multiply";
        cout<<num1*num2;
        break;
        case 4:
        cout<<"4-divide";
        cout<<num1/num2;
        break;
        default:
        cout<<"invalid choice";
        break;
    }
}