#include <iostream>
int getValuefromUser()
{ 
    std::cout<<"enter an integer";
    int input {};
    std::cin>>input;
    return input;
}
int main()
{
    int value= getValuefromUser();
    std::cout<<"Double the value is"<<2*value;
    return 0;
}
